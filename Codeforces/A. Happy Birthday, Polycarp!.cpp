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
    int cnt=0;
    if(n<10)
        cnt = n;
    else if(n<100)
        cnt = 9 + n/11;
    else if(n<1000)
        cnt = 18 + n/111;
    else if(n<10000)
        cnt = 27 + n/1111;
    else if(n<100000)
        cnt = 36 + n/11111;
    else if(n<1000000)
        cnt = 45 + n/111111;
    else if(n<10000000)
        cnt = 54 + n/1111111;
    else if(n<100000000)
        cnt = 63 + n/11111111;
    else if(n<1000000000)
        cnt = 72 + n/111111111;
    else if(n==1000000000)
        cnt = 81;

    cout << cnt << endl;
}
