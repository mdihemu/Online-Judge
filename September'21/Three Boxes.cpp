#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)

const int MOD = 1e9+7;
const int INF = 2e5+5;
const int N = 205;

void solve();
int32_t main()
{
    IOS;
    cout << fixed << setprecision(10);
    int _ = 1;
    cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int a[3], d;
    cin >> a[0] >> a[1] >> a[2] >> d;
    sort(a, a+3);
    int cnt = 1;
    if(a[0] + a[1] + a[2] <= d)
        cnt = 1;
    else if(a[0] + a[1] <= d)
        cnt = 2;
    else
        cnt = 3;
    cout << cnt << endl;
}

///Must see the constraints range
///Calculate the Time
