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
    int l,r,m;
    cin >> l >> r >> m;
    int a=l,b=0,c=0;
    int rem = m%l;
    b = r;
    c = r-rem;
    if(b-c==m)
        b = m-a+c;
    cout << a << " " << b << " " << c << endl;
}
