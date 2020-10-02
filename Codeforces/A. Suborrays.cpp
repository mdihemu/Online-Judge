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
    int a[n+1];
    vector<int>v;
    v.push_back(n/2+1);
    for(int i=1;i<=n;i+=2){
        if(i==n/2+1)
            continue;
        v.push_back(i);
    }
    for(int i=2;i<=n;i+=2){
        if(i==n/2+1)
            continue;
        v.push_back(i);
    }
    for(auto i=v.begin();i!=v.end();i++)
        cout << *i << " ";
    cout << endl;
}
