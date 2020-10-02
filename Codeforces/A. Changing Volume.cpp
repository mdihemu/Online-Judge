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
    int a,b;
    cin >> a >> b;
    int n = abs(a-b);
    int cnt = 0;
    cnt += n/5;
    n %= 5;
    cnt += n/2;
    n %= 2;
    cnt += n;
    cout << cnt << endl;
}
