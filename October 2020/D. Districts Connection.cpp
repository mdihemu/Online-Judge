#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int _ = 1;
    cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    vector<int>a(n);
    for(auto &it : a)
        cin >> it;
    vector<pair<int, int>> ans;
    int cnt = -1;
    for(int i=1;i<n;i++){
        if(a[i] != a[0]){
            cnt = i;
            ans.push_back({1,i+1});
        }
    }
    if(cnt == -1){
        cout << "NO\n";
        return;
    }
    for(int i=1;i<n;i++){
        if(a[i] == a[0])
            ans.push_back({cnt+1,i+1});
    }
    cout << "YES\n";
    for(auto [x,y] : ans)
        cout << x << " " << y << endl;
}
