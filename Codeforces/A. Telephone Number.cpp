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
    string s;
    cin >> s;
    int m=n+1;
    for(int i=0;i<n;i++){
        if(s[i]=='8'){
            m = i;
            break;
        }
    }
    if(n-m >= 11)
        cout << "YES\n";
    else
        cout << "NO\n";
}
