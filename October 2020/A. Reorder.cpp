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
    int n,m;
    cin >> n >> m;
    int cnt = 0;
    while(n--){
        int x;
        cin >> x;
        cnt += x;
    }
    if(cnt == m)
        cout << "YES\n";
    else
        cout << "NO\n";
}
