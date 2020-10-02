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
    int a,b,c;
    cin >> a >> b >> c;
    int x = min(b,c/2);
    int cnt = x*3;
    b -=x;
    x = min(a,b/2);
    cnt+=x*3;
    cout << cnt << endl;
}
