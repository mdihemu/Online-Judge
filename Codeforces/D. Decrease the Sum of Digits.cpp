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
    int n,s;
    cin >> n >> s;
    int cnt=0;
    while(n>0){
        cnt++;
        n/=10;
    }
    cnt++;
    for(int i=0;i<cnt;i++){

    }
}
