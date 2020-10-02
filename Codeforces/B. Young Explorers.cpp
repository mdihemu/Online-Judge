#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'
#define pb push_back
#define s 10010

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll>a(n);
        for(ll i=0;i<n;i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());
        ll cnt = 0, flag = 0;
        for(ll i=0;i<n;i++){
            if(++flag == a[i]){
                cnt++;
                flag = 0;
            }
        }
        cout << cnt << endl;
    }
}
