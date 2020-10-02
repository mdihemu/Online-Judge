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
    int x,y,z,a,b,c;
    cin >> x >> y >> z;
    a=min(x,y);
    b=min(x,z);
    c=min(y,z);
    int p = max(x,y);
    int f = max(z,p);
    //cout << f << endl;
    if((f==x && f==y) || (f==x && f==z) || (f==z && f==y)){
        cout << "YES\n";
        cout << a << " " << b << " " << c << endl;
    }
    else
        cout << "NO\n";
}
