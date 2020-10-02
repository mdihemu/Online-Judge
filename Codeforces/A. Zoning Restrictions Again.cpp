#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int n,h,m;
    cin >> n >> h >> m;
    int a[n+1];

    for(int i=1;i<=n;i++)
        a[i] = h;

    for(int i=0;i<m;i++){
        int l,r,x;
        cin >> l >> r >> x;
        for(int j=l;j<=r;j++)
            a[j] = min(a[j],x);
    }

    int ans=0;
    for(int i=1;i<=n;i++)
        ans += a[i]*a[i];

    cout << ans << endl;

    return 0;
}
