#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int x,y,z,a,b,c;
    cin >> x >> y >> z;
    cin >> a >> b >> c;
    if(a>=x && (a+b)>=(x+y) && (a+b+c)>=(x+y+z))
        cout << "YES\n";
    else
        cout << "NO\n";
}
