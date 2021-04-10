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
    int n;
    cin >> n;
    int a[N], b[N];
    for(int i=1;i<=n;i++)
        cin >> a[i] >> b[i];
    int t[N];
    for(int i=1;i<=n;i++)
        cin >> t[i];
    int tot = 0;
    for(int i=1;i<=n;i++){
        tot += a[i] - b[i-1] + t[i];
        if(i!=n){
            tot = max((long long)b[i], tot + (b[i]-a[i]+1)/2);
        }
    }
    cout << tot << endl;
}

///Must see the constraints range
///Calculate the Time
