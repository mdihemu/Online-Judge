#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int _=1; cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int n,m;
    cin >> n >> m;
    char a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }
    }
    int cnt = 0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(j==m-1)
                if(a[i][j] == 'R')
                    cnt++;

        }
    }
    for(int i=n-1;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j] == 'D')
                cnt++;

        }
    }

    cout << cnt << endl;
}
