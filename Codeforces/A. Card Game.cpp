#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int _=1; cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int n,k1,k2;
    cin >> n >> k1 >> k2;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<k1;i++){
        if(a[i]==n){
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";
}
