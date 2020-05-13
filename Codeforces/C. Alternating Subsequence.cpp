#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
       ll n;
       cin >> n;
       ll a[n];
       for(ll i=0; i<n; i++)
       {
           cin >> a[i];
       }
       ll sum = 0;
       ll pos = true;
       if(a[0]<0)
        pos = false;
       ll i = 0;
       while(i<n)
       {
           if(pos==false)
           {
               ll num = INT_MIN;
               ll j = i;
               while(j<n)
               {
                   if(a[j]>=0)
                    break;
                    num = max(num, a[j]);
                    j++;
               }
               pos = true;
               i = j;
               sum += num;
           }
           else
           {
               ll num = INT_MIN;
               ll j = i;
               while(j<n)
               {
                   if(a[j]<0)
                    break;
                   num = max(num, a[j]);
                   j++;
               }
               pos = false;
               i = j;
               sum += num;
           }
       }
       cout << sum << endl;

    }
    return 0;
}
