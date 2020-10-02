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
    if(_%4==0 || _%4==3)
        cout << 0 << endl;
    else
        cout << 1 << endl;
    return 0;
}
