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

int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

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

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            int cnt = 0;
            for(int k=0;k<4;k++){
                int x = i + dx[k];
                int y = j + dy[k];

                if(x<1 || y<1)
                    continue;
                if(x>n || y>m)
                    continue;
                cnt++;
            }
            if(a[i][j] > cnt){
                cout << "NO\n";
                return;
            }
            a[i][j] = cnt;
        }
    }

    cout << "YES\n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
