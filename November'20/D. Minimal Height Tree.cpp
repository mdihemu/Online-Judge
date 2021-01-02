#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int INF = 1e9+5;

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
    vector<int>a(n), ans(n,INF);
    for(int i=0;i<n;i++)
        cin >> a[i];
    int temp = 0;
    ans[0] = 0;

    for(int i=1;i<n;i++){
        if(i-1>0 && a[i-1] > a[i])
            temp++;
        ans[i] = ans[temp] + 1;
    }

    cout << ans[n-1] << endl;
}
