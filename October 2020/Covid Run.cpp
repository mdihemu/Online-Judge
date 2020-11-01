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
    int n,k,x,y;
    cin >> n >> k >> x >> y;
    set<int>s;
    for(int i=0;i<n;i++){
        int p = (x+k)%n;
        x = p;
        s.insert(p);
    }
    bool ok = false;
    for(auto i=s.begin();i!=s.end();i++){
        if(*i==y){
            ok = true;
            break;
        }
    }
    if(ok)
        cout << "YES\n";
    else
        cout << "NO\n";
}
