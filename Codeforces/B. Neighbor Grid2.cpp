#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define pb push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define IN freopen("input.txt","r",stdin);
#define OUT freopen("output.txt","w",stdout);

const int N = 305;
const double pi = 3.141592653589793238;

void solve();
int32_t main()
{
    IOS;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

void solve()
{
    int n,m;
    cin >> n >> m;
    int a[N][N];
    int ok = 0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];

            if(i==0 || j==0 || i==n-1 || j==m-1){
                if( (i==0 && j==0) || (i==0 && j==m-1) || (i==n-1 && j==0) || (i==n-1 && j==m-1)){
                    if(a[i][j] > 2){
                        ok++;
                    }
                }
                else{
                    if(a[i][j] > 3){
                        ok++;
                    }
                }
            }
            else if(a[i][j]>4){
                ok++;
            }
        }
    }

    if(ok==0){
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==0 || j==0 || i==n-1 || j==m-1){
                    if( (i==0 && j==0) || (i==0 && j==m-1) || (i==n-1 && j==0) || (i==n-1 && j==m-1))
                        a[i][j] = 2;
                    else
                        a[i][j] = 3;
                }
                else
                    a[i][j] = 4;
            }
        }

        cout << "Yes\n";
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
        cout << "No\n";
}
