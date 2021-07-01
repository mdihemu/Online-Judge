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
    int a[5], b[5];
    for(int i=0;i<4;i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(b,b+4);
    int h = b[3], hh = b[2];
    int f = max(a[0],a[1]);
    int ff = max(a[2], a[3]);
    if((f==h || f==hh) && (ff==h || ff==hh))
        cout << "YES\n";
    else
        cout << "NO\n";
}

///Must see the constraints range
///Calculate the Time
