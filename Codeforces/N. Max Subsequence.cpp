#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int _=1;
    //cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = n;
    for(int i=0;i<n-1;i++){
        if(s[i] == s[i+1])
            cnt--;
    }
    cout << cnt << endl;
}
