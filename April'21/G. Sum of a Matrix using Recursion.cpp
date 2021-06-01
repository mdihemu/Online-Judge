#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)

const int MOD = 1e9+7;
const int INF = 2e5+5;
const int N = 105;

int a[N][N], b[N][N], sum[N][N];
int r, c;

void toadd(int rr, int cc)
{
    if(rr==r)
        return;
    if(cc==c){
        toadd(rr+1, 0);
    }
    else{
        sum[rr][cc] = a[rr][cc] + b[rr][cc];
        toadd(rr, cc+1);
    }
}

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
    cin >> r >> c;

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> a[i][j];
        }
    }

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> b[i][j];
        }
    }

    toadd(0, 0);

    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(j==c-1)
                cout << sum[i][j] << endl;
            else
                cout << sum[i][j] << " ";
        }
    }
}

///Must see the constraints range
///Calculate the Time
