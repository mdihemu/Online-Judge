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
    cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int a,b;
    cin >> a >> b;
    cout << (abs(a-b)+9)/10 << endl;
}

/*
void solve()
{
    int a,b;
    cin >> a >> b;
    int x = abs(a-b);
    int cnt=0;
    if(x%10==0)
        cnt = x/10;
    else
        cnt = x/10+1;
    cout << cnt << endl;
}
*/
