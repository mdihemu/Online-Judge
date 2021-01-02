#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     pb          push_back
#define     mp          make_pair
#define     all(v)      v.begin(), v.end()
#define     IN          freopen("input.txt",'r',stdin)

const int INF = 1e9+5;
const int N = 505;

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
    int n, m;
    cin >> n >> m;
    string s[N];
    for(int i=1;i<=n;i++){
        cin >> s[i];
        s[i] = "#" + s[i];
    }

    int a[N][N] = {0};
    int cnt = 0;
    for(int i=n;i>=1;i--){
        for(int j=m;j>=1;j--){
            if(s[i][j] == '*')
                a[i][j] = min({a[i+1][j+1] , a[i+1][j-1], a[i+1][j]}) + 1;
            else
                a[i][j] = 0;
            cnt += a[i][j];
        }
    }
    cout << cnt << endl;
}
