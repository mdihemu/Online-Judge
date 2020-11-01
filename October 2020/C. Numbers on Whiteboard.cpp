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
    multiset<int>a;
    for(int i=1;i<=n;i++){
        a.insert(i);
    }

    vector<pair<int, int>>ans;
    n--;
    while(n--){
        auto it = a.end();
        it--;
        int aa = *it;
        a.erase(it);

        it = a.end();
        it--;
        int b = *it;
        a.erase(it);

        a.insert((aa+b+1)/2);
        ans.push_back({aa,b});
    }
    cout << *a.begin() << endl;
    for(auto [x,y] : ans)
        cout << x << " " << y << endl;
}
