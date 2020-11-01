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
    string n;
    cin >> n;
    int m = n[0] - '0';
    int cnt = (m-1) * 10;
    int x = n.size();
    if(x == 1)
        cnt++;
    else if(x==2)
        cnt += 3;
    else if(x==3)
        cnt += 6;
    else
        cnt += 10;
    cout << cnt << endl;
}
