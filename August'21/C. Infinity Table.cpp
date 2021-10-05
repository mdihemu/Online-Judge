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
    int n;
    cin >> n;
    int sq = sqrt(n);
    int x = sq;
    sq *= sq;
    int m = n - sq;

    int r = 0, c = 0;
    int nxt = (x+1) * (x+1);

    if(n==sq){
        cout << x << " " << 1 << endl;
        return;
    }
    ///for row selection
    if(sq+x+1>n){
        r = m;
        c = x+1;
    }
    else{
        r = x+1;
        c = nxt-n+1;
    }
    cout << r << " " << c << endl;
}

///Must see the constraints range
///Calculate the Time
