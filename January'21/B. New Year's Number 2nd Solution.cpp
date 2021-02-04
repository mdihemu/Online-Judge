#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)

const int INF = 1e9+5;
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
    int n;
    cin >> n;
    int cnt21 = n%2020;
    int cnt20 = (n-cnt21) / 2020 - cnt21;

    if(cnt20 >= 0 && 2020*cnt20 + 2021*cnt21 == n)
        cout << "YES\n";
    else
        cout << "NO\n";
}

///Must see the constraints range
///Calculate the Time
