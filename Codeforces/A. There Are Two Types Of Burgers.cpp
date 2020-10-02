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
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    int cnt=0;
    a /= 2;
    if(d>e){
        cnt += min(b,a)*d;
        a -= b;
        if(a<0)
            a = 0;
        cnt += min(a,c)*e;
    }
    else{
        cnt += min(a,c)*e;
        a -= c;
        if(a<0)
            a = 0;
        cnt += min(b,a)*d;
    }
    cout << cnt << endl;
}
