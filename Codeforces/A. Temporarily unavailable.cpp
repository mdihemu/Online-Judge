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
    int a,b,c,r;
    cin >> a >> b >> c >> r;
    if(b>a)
        swap(a,b);

    int l = max(b,c-r);
    int m = min(a,c+r);
    int x = 0;
    cout << a-b-max(x,m-l) << endl;
}
