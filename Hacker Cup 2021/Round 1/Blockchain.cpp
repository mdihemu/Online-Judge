#include <algorithm>
#include <iostream>
#include <vector>
#include <utility>
using namespace std;

const int LIM = 800008, LIM2 = 20;
const int MOD = 1000000007;

class UnionFind {
  int N;
  int root[LIM], rank[LIM], size[LIM];

  void init(int _N) {
    N = _N;
    for (int i = 0; i < N; i++) {
      root[i] = i;
      size[i] = 1;
    }
  }

 public:
  UnionFind(int _N) {
    init(_N);
  }

  int find(int i) {
    if (root[i] != i) {
      root[i] = find(root[i]);
    }
    return root[i];
  }

  bool merge(int i, int j) {
    i = find(i);
    j = find(j);
    if (i == j) {
      return false;
    }
    if (rank[i] > rank[j]) {
      swap(i, j);
    }
    root[i] = j;
    size[j] += size[i];
    if (rank[i] == rank[j]) {
      rank[j]++;
    }
    return true;
  }

  int get_size(int i) {
    return size[find(i)];
  }
};

int N, ans, tot;
vector<pair<int, int>> adj[LIM];
int dynU[LIM][LIM2 + 2]; // dynU[i][j] = # of nodes reachable up from i (through edge to parent) via capacity >= j edges
int dynD[LIM][LIM2 + 2]; // dynD[i][j] = # of nodes reachable down from i via capacity >= j edges

// Populate dynD.
void recD(int i, int p) {
  for (int j = 1; j <= LIM2; j++) {
    dynD[i][j] = 1;
  }
  for (auto e : adj[i]) {
    int b = e.first, c = e.second;
    if (b == p) {
      continue;
    }
    recD(b, i);
    for (int j = 1; j <= c; j++) {
      dynD[i][j] += dynD[b][j];
    }
  }
}

// Populate dynU (and answer).
void recU(int i, int p) {
  for (auto e : adj[i]) {
    int b = e.first, c = e.second;
    if (b == p) {
      continue;
    }
    for (int j = 1; j <= LIM2; j++) {
      if (j <= c) {
        dynU[b][j] = (dynU[i][j] + dynD[i][j] - dynD[b][j] + MOD) % MOD;
      } else {
        dynU[b][j] = 0;
      }
    }
    int totE = tot, prev = 0;
    for (int j = c; j > 0; j--) {
      int curr = (long long)dynD[b][j]*dynU[b][j] % MOD;
      int cnt = (curr - prev + MOD) % MOD;
      int s = (long long)cnt*j % MOD;
      totE = (totE - s + MOD) % MOD;
      prev = curr;
    }
    ans = (long long)ans*totE % MOD;
    recU(b, i);
  }
}

int solve() {
  for (int i = 0; i < LIM; i++) {
    adj[i].clear();
  }
  // Input.
  cin >> N;
  vector<pair<int, pair<int, int>>> E;
  for (int i = 0; i < N - 1; i++) {
    int a, b, c;
    cin >> a >> b >> c;
    a--;
    b--;
    adj[a].push_back(make_pair(b, c));
    adj[b].push_back(make_pair(a, c));
    E.push_back(make_pair(c, make_pair(a, b)));
  }
  // Compute initial capacity sum.
  tot = 0;
  UnionFind U(N);
  sort(E.begin(), E.end());
  for (int i = (int)E.size() - 1; i >= 0; i--) {
    int a = E[i].second.first, b = E[i].second.second, c = E[i].first;
    tot = (tot + (long long)c*U.get_size(a)*U.get_size(b)) % MOD;
    U.merge(a, b);
  }
  // Compute reduced capacity sums via DP.
  ans = 1;
  recD(0, -1);
  recU(0, -1);
  return ans;
}

int main() {
  int T;
  cin >> T;
  for (int t = 1; t <= T; t++) {
    cout << "Case #" << t << ": " << solve() << endl;
  }
  return 0;
}
