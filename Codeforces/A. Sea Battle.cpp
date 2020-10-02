#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int y = (a+2)*(b+2);
    int x = a*b;
    y -= x;
    y += d*2;
    cout << y << endl;
    return 0;
}
