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
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];

    bool ok = true;
    int mn = a[0], mx = a[0];
    for(int i=1;i<n;i++){
        int templ = a[i], temph = a[i] + k - 1;
        mn = max(templ, mn - k + 1);
        mx = min(temph, mx + k - 1);

        if(mn > mx){
            ok = false;
            break;
        }
    }
    if(mn > a[n-1])
        ok = false;
    if(ok)
        cout << "YES\n";
    else
        cout << "NO\n";
}

///Must see the constraints range
///Calculate the Time
