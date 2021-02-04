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
    int aa,bb,k;
    cin >> aa >> bb >> k;

    vector<int>a(aa), b(bb);
    vector<pair<int, int>>edges(k);
    for(auto &[x, y]:edges)
        cin >> x;
    for(auto &[x, y]:edges)
        cin >> y;

    for(auto &[x, y]:edges){
        x--;
        y--;
        a[x]++;
        b[y]++;
    }

    int cnt = 0;
    for(auto &[x, y]:edges)
        cnt += k-a[x]-b[y]+1;

    cout << cnt/2 << endl;
}

///Must see the constraints range
///Calculate the Time
