/*
Author: DarkMotion
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll x,y,a,b;
        cin >> x >> y;
        cin >> a >> b;
        ll sum = 0;
        if(a<=b/2)
            sum = x*a + y*a;
        else{
            ll op = min(x,y);
            sum = op * b;
            ll temp = max(x,y) - op;
            sum += temp * a;
        }
        cout << sum << endl;
    }
}
