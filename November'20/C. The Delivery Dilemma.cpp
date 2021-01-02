#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

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

    int a[n], b[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<n;i++)
        cin >> b[i];

    vector< pair< int, int>>v(n);
    for(int i=0;i<n;i++)
        v[i] = make_pair(a[i], b[i]);
    sort(v.begin(), v.end());

    int ans = 5e10, cnt = 0;
    for(int i=0;i<n;i++){
        ans = min(ans, max(v[n-i-1].first, cnt));
        cnt += v[n-i-1].second;
    }
    ans = min(ans,cnt);

    cout << ans << endl;
}
