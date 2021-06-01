#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)

const int MOD = 1e9+7;
const int INF = 2e5+5;
const int N = 1e3+5;

int n, a[N];
int sum = 0;

int cntsum(int n)
{
    if(n==0)
        return sum + a[0];
    return (sum + a[n] + cntsum(n-1));
}

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
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> a[i];
    cout << cntsum(n) << endl;
}

///Must see the constraints range
///Calculate the Time
