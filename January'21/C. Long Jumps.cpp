#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     all(v)      v.begin(), v.end()
#define     IN          freopen("input.txt",'r',stdin)

const int INF = 2e5+1;
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
    int a[n+1] = {0}, b[n+1] = {0};
    for(int i=1;i<=n;i++)
        cin >> a[i];

    for(int i=n;i>=1;i--){
        b[i] = a[i];
        if(a[i] + i <= n)
            b[i] = a[i] + b[i+a[i]];
    }
    int mx = *max_element(b, b+n+1);

    cout << mx << endl;
}

///Must see the constraints range
///Calculate the Time
