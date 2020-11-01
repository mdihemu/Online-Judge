#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int _ = 1;
    cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    if(n==1 || n==2 || n==4){
        cout << -1 << endl;
        return;
    }
    if(n%3==0)
        cout << n/3 << " 0 0\n";
    else if(n%3==1)
        cout << n/3 - 2 << " 0 1\n";
    else
        cout << n/3 - 1 << " 1 0\n";
}
