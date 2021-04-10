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
    int n, m, x;
    cin >> n >> m >> x;
    if(n*m == x){
        cout << x << endl;
        return;
    }
    int nn = x%n;
    if(nn==0)
        nn = n;
    nn--;
    int mm = (x+n-1)/n ;
    cout << nn * m + mm << endl;
}

///Must see the constraints range
///Calculate the Time
