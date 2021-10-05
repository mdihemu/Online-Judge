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

const double speedlight = 300000;
const double pie = 3.1416;
const double lightmintue = 18000000;

void solve();
int32_t main()
{
    IOS;
    //cout << fixed << setprecision(10);
    int _ = 1;
    ///cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    double m, h, s;
    cin >> m >> h >> s;
    double distance = 2 * pie * m * speedlight;

    s *= h * 60;

    cout << distance/s << endl;
}

///Must see the constraints range
///Calculate the Time
