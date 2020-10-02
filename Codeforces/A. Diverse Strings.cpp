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
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    bool ok = true;
    for(int i=1;i<s.size();i++){
        if(s[i]-s[i-1]!=1)
            ok = false;
    }
    if(ok)
        cout << "YES\n";
    else
        cout << "NO\n";
}
