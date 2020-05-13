/*
Author: DarkMotion
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    ll k = 1;
    while(t--){
        ll a,b;
        cin >> a >> b;
        ll x = max(a,b);
        ll y = min(a,b);
        ll cnt = 0;

        for(ll i=y;i<=x;i++){
            if(i%2 !=0)
                cnt+= i;
        }
        cout << "Case " << k << ": " << cnt << endl;
        k++;
    }
    return 0;
}

