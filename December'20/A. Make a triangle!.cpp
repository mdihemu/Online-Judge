#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     all(v)      v.begin(), v.end()
#define     IN          freopen("input.txt",'r',stdin)

const int INF = 1e9+5;
const int N = 205;

void solve();
int32_t main()
{
    IOS;
    cout << fixed << setprecision(10);
    int _ = 1;
    //cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int a,b,c;
    cin >> a >> b >> c;

    int tot = a+b+c;
    int mx = max(a,max(b,c));
    tot = tot - mx;
    int cnt = 0;
    if(mx>=tot)
        cnt = mx - tot + 1;

    cout << cnt << endl;
}

///Must see the constraints range
///Calculate the Time
