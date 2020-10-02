#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int n;
    cin >> n;
    n = n%4;
    if(n==0)
        cout << "1 A\n";
    else if(n==1)
        cout << "0 A\n";
    else if(n==2)
        cout << "1 B\n";
    else if(n==3)
        cout << "2 A\n";
    return 0;
}
