#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int _=1;
    cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int n,cnt=0;
    cin >> n;
    int x = sqrt(n);
    cnt += x;
    cnt += (n+x-1)/x;
    cout << cnt-2 << endl;
}
