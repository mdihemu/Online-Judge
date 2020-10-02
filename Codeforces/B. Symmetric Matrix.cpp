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
    int n,m;
    cin >> n >> m;
    bool ok = false;
    int a,aa,b,bb;
    for(int i=0;i<n;i++){
        cin >> a >> aa >> b >> bb;
        if(aa == b){
            ok = true;
        }
    }

    if(m%2==1){
        ok = false;
    }
    if(ok){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}
