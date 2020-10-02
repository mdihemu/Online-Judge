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
    int n;
    cin >> n;
    string s = "";

    int e = (n+3)/4;
    for(int i=e;i<n;i++){
        s += '9';
    }
    for(int i=0;i<e;i++){
        s += '8';
    }

    cout << s << endl;
}
