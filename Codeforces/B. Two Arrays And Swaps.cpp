/*
Author: DarkMotion
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M = 100001;


int main()
{
    //ios::sync_with_stdio(0);
    //cin.tie(0);
    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        vector<ll>a;
        vector<ll>b;
        for(int i = 1;i<=n;i++){
            ll x;
            cin >> x;
            a.push_back(x);
        }
        for(int i = 0;i<n;i++){
            ll x;
            cin >> x;
            b.push_back(x);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<ll>());
        for(int i = 0;i<k;i++){
            if(b[i] > a[i])
                swap(a[i],b[i]);
        }
        ll cnt = accumulate(a.begin(), a.end(), 0);
        cout << cnt << endl;
    }
}
