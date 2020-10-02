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
    int n,a,b;
    cin >> n >> a >> b;
    int cnt=0;
    if(a*2<=b)
        cnt = n*a;
    else{
        cnt = (n/2)*b;
        cnt += (n%2)*a;
    }
    cout << cnt << endl;
}
