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
    int n;
    cin >> n;
    vector<int>a(n),b(n),v;
    for(auto &e:a)
        cin >> e;
    for(auto &e:b)
        cin >> e;
    for(int i=0;i<n;i++){
        if(b[i]==0)
            v.push_back(a[i]),a[i] = LONG_MAX;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(a[i]==LONG_MAX)
            a[i] = v.back(),v.pop_back();
    }
    for(auto &e:a)
        cout << e << " ";
    cout << endl;
}
