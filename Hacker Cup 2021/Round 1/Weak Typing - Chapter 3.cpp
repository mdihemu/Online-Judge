#include <iostream>
#include <utility>
using namespace std;

const int MOD = 1000000007;

struct Seq {
  long long len{0}, ns{0}, sL{0}, sR{0}, ans{0};
  pair<long long, char> p1{-1, 0}, p2{-1, 0};
};

Seq concat(const Seq &A, const Seq &B) {
  Seq S;
  S.len = (A.len + B.len) % MOD;
  S.ns = (A.ns + B.ns) % MOD;
  S.p1 = A.p1.first >= 0 ? A.p1 : make_pair((B.p1.first + A.len) % MOD, B.p1.second);
  S.p2 = B.p2.first >= 0 ? make_pair((B.p2.first + A.len) % MOD, B.p2.second) : A.p2;
  S.sL = (A.sL + B.sL + B.ns*A.len) % MOD;
  S.sR = (A.sR + B.sR + A.ns*B.len) % MOD;
  S.ans = (A.ans + B.ans + A.sL*B.len + B.sR*A.len) % MOD;
  // Check if there's a new switch.
  if (A.p2.first >= 0 && B.p1.first >= 0 && A.p2.second != B.p1.second) {
    S.ns++;
    long long vL = A.p2.first + 1, vR = (B.len - B.p1.first + MOD) % MOD;
    S.sL = (S.sL + vL) % MOD;
    S.sR = (S.sR + vR) % MOD;
    S.ans = (S.ans + vL*vR) % MOD;
  }
  return S;
}

int K;
string U;

int solve() {
  cin >> K >> U;
  Seq S;
  for (int i = 0; i < K; i++) {
    Seq S2;
    if (U[i] == '.') {
      S2 = S;
    } else {
      S2.len = 1;
      if (U[i] != 'F') {
        S2.p1 = S2.p2 = make_pair(0, U[i]);
      }
    }
    S = concat(S, S2);
  }
  return S.ans;
}

int main() {
  int T;
  cin >> T;
  for (int t = 1; t <= T; t++) {
    cout << "Case #" << t << ": " << solve() << endl;
  }
  return 0;
}
