#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    cout << fixed << setprecision(10);
    int _ = 1;
    cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    string s,t;
    cin >> s >> t;
    int n = s.size();
    for(int i=0;i<t.size();i++)
        s+=t[i];
    sort(s.begin(),s.end());
    for(int i=0;i<n;i++)
        cout << s[i];
    cout << endl;
}
