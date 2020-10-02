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
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a,a+3);
    if(a[2] <= a[0]+a[1]+1)
        cout << "Yes\n";
    else
        cout << "No\n";
}
