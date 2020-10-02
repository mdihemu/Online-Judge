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
    string a,b;
    cin >> a >> b;
    int cnt=0,ans=0;
    for(int i=0;i<n;i++){
        if(a[i]!=b[i])
            cnt++;
    }
    if(cnt==n)
        ans = -1;
    else{

    }
}
