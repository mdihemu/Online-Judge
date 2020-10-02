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
    int n,x,a,b;
    cin >> n >> x >> a >> b;
    int cnt = abs(a-b) + x ;
    if(cnt>n-1)
        cnt = n-1;
    cout << cnt << endl;
}
