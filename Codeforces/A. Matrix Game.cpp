#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define pb push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define IN freopen("input.txt","r",stdin);
#define OUT freopen("output.txt","w",stdout);

const int N = 51;
int a[N][N];
int n,m;

void solve();
void cf()
{
    int t; cin >> t; while(t--) solve();
}
int32_t main()
{
    IOS;
    cf();
    ///solve();
}

void solve()
{
    cin >> n >> m;
    set<int>r,c;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> a[i][j];
            if(a[i][j]==1){
                r.insert(i),c.insert(j);
            }
        }
    }
    int cnt = min(n-r.size(),m-c.size());
    if(cnt%2)
        cout << "Ashish\n";
    else
        cout << "Vivek\n";
}
