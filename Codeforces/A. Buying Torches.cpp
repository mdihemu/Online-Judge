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
    int x,y,k;
    cin >> x >> y >> k;
    int stick = k*y + k;
    stick--;
    int cnt = 0;
    stick += x-2;
    cnt = stick/(x-1);
    cout << cnt+k << endl;
}
