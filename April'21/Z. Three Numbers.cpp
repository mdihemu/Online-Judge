#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)

const int MOD = 1e9+7;
const int INF = 2e5+5;
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
    int k, s;
    cin >> k >> s;
    int cnt = 0;

    for(int i=0;i<=k;i++){
        for(int j=0;j<=k;j++){
            int temp = s - i - j;
            if(temp>=0 && temp<=k)
                cnt++;
        }
    }

    cout << cnt << endl;
}

///Must see the constraints range
///Calculate the Time
