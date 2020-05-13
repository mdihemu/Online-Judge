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
        ll n,r;
        cin >> n >> r;
        set<ll,greater<ll>>s;
        while(n--){
            ll a;
            cin >> a;
            s.insert(a);
        }
        ll cnt = 0;
        for(auto i:s){
            if(i <= cnt * r)
                break;
            else
                cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}
