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
    int n,m;
    cin >> n >> m;
    int a[n+1][m+1];
    for(int i=1;i<=n;i++){
        string s;
        cin >> s;
        for(int j=0;j<m;j++){
            a[i][j+1] = s[j] - '0';
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
