#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int x,y;
    cin >> x >> y;
    int n=y-x;
    if(n==1)
        cout << y*10-1 << " " << y*10 << endl;
    else if(n==0)
        cout << y*10+1 << " " << y*10+2 << endl;
    else if(x==9 && y==1)
        cout << 9 << " " << 10 << endl;
    else
        cout << -1 << endl;
    return 0;
}
