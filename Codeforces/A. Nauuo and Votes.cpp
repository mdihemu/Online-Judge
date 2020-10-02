#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int x,y,z;
    cin >> x >> y >> z;
    if((x+z)==(y+z) && z==0)
        cout << 0 << endl;
    else if(x>y+z)
        cout << "+\n";
    else if(x+z<y)
        cout << "-\n";
    else
        cout << "?\n";
    return 0;
}
