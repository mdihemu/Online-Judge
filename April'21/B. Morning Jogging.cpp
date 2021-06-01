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

int a[N][N], ans[N][N];

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
    vector<int>tot;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
            tot.push_back(a[i][j]);
        }
    }
    sort(tot.begin(), tot.end());
    vector<int>vv;
    for(int i=0;i<m;i++){
        vv.push_back(tot[i]);
    }

    for(int i=0;i<n;i++){
        vector<int>v;
        for(int j=0;j<m;j++){
            v.push_back(a[i][j]);
        }
        sort(v.begin(), v.end());
        int k=0;
        for(int ii=i;ii<m;ii++){
            ans[i][ii] = v[k];
            k++;
        }
        for(int ii=0;ii<i;ii++){
            ans[i][ii] = v[k];
            k++;
        }

        /*
        int lol = min(i+1,m);
        swap(v[0], v[lol-1]);
        for(int i:v){
            cout << i << " ";
        }
        cout << endl;
        */
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}

///Must see the constraints range
///Calculate the Time
