#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
bool check(ll a, ll b, ll c, ll d)
{
    return log(a)*b > log(c)*d;
}
int main()
{
  ll a, b, c, d;
  cin >> a >> b >> c >> d;
  if(check(a, b, c, d))
  {
      cout << "YES" << endl;
  }
  else
  {
      cout << "NO" << endl;
  }
  return 0;


}
