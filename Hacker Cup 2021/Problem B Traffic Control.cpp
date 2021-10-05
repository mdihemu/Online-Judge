#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     IN          freopen("in.txt","r",stdin)
#define     OUT         freopen("output.txt","w",stdout);

const int MOD = 1e9+7;
const int INF = 2e5+5;
const int N = 205;

int solve22(int n, int m, int a, int b)
{
    int ar[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i==0 || i==n-1 || j==0 || j==m-1){
                ar[i][j] = 1;
            }
            else{
                ar[i][j] = 2;
            }
        }
    }
    ar[0][0] = a-n-m+2;
    ar[n-1][0] = b-n-m+2;

    int x = ar[0][0];
    int y = ar[n-1][0];
    if(x<=0 || y<=0){
        cout << "Impossible\n";
        return 0;
    }
    cout << "Possible\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

void solve();
int32_t main()
{
    IOS;

    ///For input file
    freopen("traffic_control_input.txt","r",stdin);

    ///Show the output
    freopen("output.txt","w",stdout);

    cout << fixed << setprecision(10);
    int _ = 1;
    //cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int numberoftestcase;
    cin >> numberoftestcase;
    for(int testcase = 1;testcase<=numberoftestcase;testcase++){
        cout << "Case #" << testcase << ": ";

        ///Main problem start
        int n, m, a, b;
        cin >> n >> m >> a >> b;
        solve22(n,m,a,b);

    }
}

///Must see the constraints range
///Calculate the Time
