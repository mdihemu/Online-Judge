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
        ll n,m;
        cin >> n >> m;
        ll sum = 0;
        while(n--){
            ll a;
            cin >> a;
            sum+=a;
        }
        cout << min(sum,m) << endl;
    }
}
