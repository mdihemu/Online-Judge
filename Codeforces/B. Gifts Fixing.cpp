#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define inf 1e10+5;

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
    int n;
    cin >> n;
    int a[n],b[n];
    int ma=inf;
    int mb=inf;
    for(int i=0;i<n;i++){
        cin >> a[i];
        ma = min(ma,a[i]);
    }
    for(int i=0;i<n;i++){
        a[i] = a[i] - ma;
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
        mb = min(mb,b[i]);
    }
    for(int i=0;i<n;i++){
        b[i] = b[i] - mb;
    }

    int cnt=0;
    for(int i=0;i<n;i++){
        cnt += max(a[i],b[i]);
    }
    cout << cnt << endl;
}
