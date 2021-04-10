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
    int k, n, a, b;
    cin >> k >> n >> a >> b;

    int l = 0, r = n, cnt = 0;
    while(l<=r){
        int mid = (l+r)/2;
        if((a*mid + (n-mid)*b) <k){
            cnt = max(cnt, mid);
            l = mid + 1;
        }
        else{
            r = mid - 1;
        }
    }

    if(cnt == 0 && (n*b < k))
        cout << "0\n";
    else if(cnt)
        cout << cnt << endl;
    else
        cout << -1 << endl;
}

///Must see the constraints range
///Calculate the Time
