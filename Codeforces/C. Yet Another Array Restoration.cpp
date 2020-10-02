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
    int n,x,y;
    cin >> n >> x >> y;
    int p = y-x;
    for(int i=n-1;i>0;i--){
        if(p%i==0){
            p = i;
            break;
        }
    }
    p = (y-x)/p;
    int cnt = y/p;
    if(n>cnt){
        y += (n-cnt-1)*p;
    }
    if(y-(n-1)*p<=0)
        y+=p;
    while(n--){
        cout << y << " ";
        y-=p;
    }
    cout << endl;
}
