#include <iostream>
using namespace std;

const int MOD = 1000000007;

int N;
string S;

int solve() {
  cin >> N >> S;
  int p = -1, ans = 0;
  for (int i = 0; i < N; i++) {
    if (S[i] == 'F') {
      continue;
    }
    if (p >= 0 && S[i] != S[p]) {
      ans = (ans + (long long)(p + 1)*(N - i)) % MOD;
    }
    p = i;
  }
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
