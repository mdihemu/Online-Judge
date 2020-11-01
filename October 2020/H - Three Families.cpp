#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    //IOS;
    int _=1;
    cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    double a,b,c,cnt = 0;
    cin >> a >> b >> c;
    double hour = c/(a+b);
    cnt = a*hour + (a-b)*hour;
    cout << fixed << setprecision(0);
    cout << cnt << endl;
}
