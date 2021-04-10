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
    //cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int n, v;
    cin >> n >> v;
    double a[25], b[25];
    double cnt = 0;

    for(int i=0;i<n;i++){
        cin >> a[i];
        cnt += a[i];
    }
    for(int i=0;i<n;i++){
        double x;
        cin >> x;
        x /= a[i];
        b[i] = x;
    }

    double mn = *min_element(b,b+n);
    double vv = v * 1.00;
    cnt *= mn;
    cnt = min(cnt, vv);
    cout << cnt << endl;
}

///Must see the constraints range
///Calculate the Time
