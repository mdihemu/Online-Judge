#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

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
    int n;
    cin >> n;

    int a[N];
    for(int i=1;i<=n;i++)
        cin >> a[i];
    sort(a+1,a+n+1);

    int ans[N][2*N];
    ans[0][0] = 0;

    for(int i=1;i<=n;i++){
        ans[i][0] = INF;
        for(int j=1;j<=2*n;j++)
            ans[i][j] = min(ans[i][j-1], ans[i-1][j-1] + abs(a[i] - j));
    }

    cout << ans[n][2*n] << endl;
}
