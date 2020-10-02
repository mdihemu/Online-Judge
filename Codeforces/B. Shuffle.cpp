#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define pb push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define IN freopen("input.txt","r",stdin);
#define OUT freopen("output.txt","w",stdout);

const int N = 2e5 + 5;

void solve();
void cf()
{
    int t; cin >> t; while(t--) solve();
}
int32_t main()
{
    IOS;
    cf();
    ///solve();
}

void solve()
{
    int n,x,m;
    cin >> n >> x >> m;
    int l = x, r = x;
    while(m--){
        int a,b;
        cin >> a >> b;
        if(r<a || b<l)
            continue;
        l = min(l,a);
        r = max(r,b);
    }
    int cnt = r-l+1;
    cout << cnt << endl;
}

