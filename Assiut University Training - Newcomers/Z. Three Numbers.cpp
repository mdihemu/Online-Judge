#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
const ll N = 3001;

int main()
{
  ll n, s;
  cin >> n >> s;
  ll cnt = 0;
  for(ll i = 0; i<=n; i++)
  {
     ll sum = i;
     for(ll j = 0; j<=n; j++)
     {
       sum += j;
       if((s - sum>=0) && (s - sum)<=n)
          cnt++;
       sum -= j;
     }
  }
  cout << cnt << endl;

  return 0;


}
