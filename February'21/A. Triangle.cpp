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
    int a[4];
    for(int i=0;i<4;i++)
        cin >> a[i];
    sort(a, a+4);
    int b = a[0], c = a[1], d = a[2], e = a[3];
    if(b+c>e || d+c>e || b+c>d)
        cout << "TRIANGLE\n";
    else if(b+c==e || d+c==e || b+c==d)
        cout << "SEGMENT\n";
    else
        cout << "IMPOSSIBLE\n";
}

///Must see the constraints range
///Calculate the Time
