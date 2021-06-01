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
    int g, p;
    cin >> g >> p;
    int a[15];
    for(int i=1;i<=10;i++)
        cin >> a[i];
    int mn = 0, mx = 0;
    int cnt = 0;
    for(int i=10;i>0;i--){
        if(i==g)
            break;
        cnt += a[i];
    }
    mn = (cnt+p)/p;
    cnt += a[g];
    mx = (cnt+p-1) / p;
    cout << mn << " " << mx << endl;
}

///Must see the constraints range
///Calculate the Time
