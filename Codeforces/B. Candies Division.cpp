#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int t=1; cin >> t;
    while(t--) solve();
    return 0;
}

void solve()
{
    int n,k;
    cin >> n >> k;
    int cnt=0;
    int p = n/k;
    cnt = p*k;
    n -= cnt;
    if(n>k/2)
        cnt += k/2;
    else
        cnt+=n;
    cout << cnt << endl;
}
