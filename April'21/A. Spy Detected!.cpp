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
    int cnt[110] = {0};
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        cnt[a[i]]++;
    }
    int cntt = 0;
    for(int i=0;i<105;i++){
        if(cnt[i] == 1){
            cntt = i;
        }
    }
    int ans = 0;
    for(int i=0;i<n;i++){
        if(a[i] == cntt){
            ans = i+1;
        }
    }
    cout << ans << endl;
}

///Must see the constraints range
///Calculate the Time
