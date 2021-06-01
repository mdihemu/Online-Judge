#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)

const int MOD = 1e9+7;
const int INF = 2e5+5;
const int N = 1005;

int mat[N][N];

void lol()
{
    for(int i=1;i<=1000;i++){
        mat[i][1] = (i*(i+1))/2;
        for(int j=2;j<=1000;j++){
            mat[i][j] = mat[i][j-1] + i + j - 2;
        }
    }
}

void solve();
int32_t main()
{
    IOS;
    lol();
    cout << fixed << setprecision(10);
    int _ = 1;
    cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int x,y,xx,yy;
    cin >> x >> y >> xx >> yy;

    int tot = 0;
    for(int i=x;i<=xx;i++)
        tot += mat[i][y];
    for(int i=y+1;i<=yy;i++)
        tot += mat[xx][i];

    cout << tot << endl;

}

///Must see the constraints range
///Calculate the Time
