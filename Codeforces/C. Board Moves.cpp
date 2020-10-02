/*
Author: DarkMotion
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M = 100001;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll cnt = 0;
        ll old = 0,a=0;
        ll up = 0;
        for(ll i = 1;i<=n;i+=2){
            a = i-2;
            old  = (i*i) - (a*a);
            cnt += old * up;
            up++;
        }
        cout << cnt <<  endl;
    }
}

