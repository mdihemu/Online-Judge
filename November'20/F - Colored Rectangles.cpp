#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int INF = 1e9+5;
const int N = 205;

int a[N],b[N],c[N],ans[N][N][N];

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
    int x,y,z;
    cin >> x >> y >> z;

    for(int i=1;i<=x;i++)
        cin >> a[i];
    sort(a+1,a+x+1);

    for(int i=1;i<=y;i++)
        cin >> b[i];
    sort(b+1,b+y+1);

    for(int i=1;i<=z;i++)
        cin >> c[i];
    sort(c+1,c+z+1);

    for(int i=0;i<=x;i++){
        for(int j=0;j<=y;j++){
            for(int k=0;k<=z;k++){
                if(i&&j){
                    ans[i][j][k] = max(ans[i][j][k] , ans[i-1][j-1][k] + a[i]*b[j]);
                }
                if(i&&k){
                    ans[i][j][k] = max(ans[i][j][k] , ans[i-1][j][k-1] + a[i]*c[k]);
                }
                if(k&&j){
                    ans[i][j][k] = max(ans[i][j][k] , ans[i][j-1][k-1] + c[k]*b[j]);
                }
            }
        }
    }
    cout << ans[x][y][z] << endl;
}
