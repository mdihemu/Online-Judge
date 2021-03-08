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

    int a[105];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    bool ok = true;
    int tot = 0;
    int temp = 0;
    for(int i=0;i<n;i++){
        tot += a[i];
        int x = (i*(i+1))/2;
        if(tot < x){
            ok = false;
            break;
        }
    }

    if(ok)
        cout << "YES\n";
    else
        cout << "NO\n";
}

///Must see the constraints range
///Calculate the Time
