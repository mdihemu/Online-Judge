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
    while(n>1){
        if(n%2==0)
            n/=2,cnt++;
        else if(n%3==0)
            n = (2*n)/3,cnt++;
        else if(n%5==0)
            n = (4*n)/5,cnt++;
        else
            break;
    }
    if(n==1)
        cout << cnt << endl;
    else
        cout << -1 << endl;
}
