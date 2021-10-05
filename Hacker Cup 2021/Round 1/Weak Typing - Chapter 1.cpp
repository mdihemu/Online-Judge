#include <iostream>
using namespace std;

int N;
string W;

int solve() {
  cin >> N >> W;
  int p = -1, ans = 0;
  for (int i = 0; i < N; i++) {
    if (W[i] == 'F') {
      continue;
    }
    if (p >= 0 && W[i] != W[p]) {
      ans++;
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
