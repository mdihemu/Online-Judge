#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)

const int INF = 1e9+5;
const int N = 1e5+5;

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
    int n,k;
    cin >> n >> k;
    int a[N] = {0};
    for(int i=1;i<=k;i++)
        a[i] = i;
    reverse(a + k - n + k, a+k+1);
    for(int i=1;i<=k;i++)
        cout << a[i] << " ";
    cout << endl;
}

///Must see the constraints range
///Calculate the Time
