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
    int cnt[3] = {0};
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        cnt[x%3]++;
    }
    int limit = n/3;
    int ans = 0;
    int lol = 3;
    while(lol--){
        for(int i=0;i<3;i++){
            if(cnt[i] > limit){
                int x = cnt[i] - limit;
                ans += x;
                cnt[i] -= x;
                if(i==2){
                    cnt[0] += x;
                }
                else
                    cnt[i+1] += x;
            }
        }
    }
    cout << ans << endl;
}

///Must see the constraints range
///Calculate the Time
