#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int a,b,c;
    cin >> a >> b >> c;
    c = 2*c;
    if(abs(a-b)<=1)
        c += a+b;
    else{
        c+= 2*min(a,b) + 1;
    }

    cout << c << endl;
}
