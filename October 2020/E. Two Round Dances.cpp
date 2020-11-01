#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int _ = 1;
    //cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    int a[21];
    a[0] = 1;
    for(int i=1;i<21;i++)
        a[i] = a[i-1]*i;

    int cnt = a[n] / a[n/2] / a[n/2];
    cnt *= a[n/2-1] * a[n/2-1];
    cnt /= 2;

    cout << cnt << endl;
}
