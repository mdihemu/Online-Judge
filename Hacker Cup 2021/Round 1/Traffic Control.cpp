#include <iostream>
using namespace std;

int N, M, A, B;

void solve() {
  cin >> N >> M >> A >> B;
  A -= N + M - 2;
  B -= N + M - 2;
  if (A < 1 || B < 1) {
    cout << "Impossible" << endl;
    return;
  }
  cout << "Possible" << endl;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      int ans = (!i && !j) ? A : (!i && j == M - 1) ? B : 1;
      cout << ans << (j < M - 1 ? ' ' : '\n');
    }
  }
}

int main() {
  int T;
  cin >> T;
  for (int t = 1; t <= T; t++) {
    cout << "Case #" << t << ": ";
    solve();
  }
  return 0;
}
