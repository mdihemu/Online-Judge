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
    vector<int>ans;
    for(int i=0;i<n;i++){
        if(a[i] != b[i]){
            if(i>0)
                ans.push_back(i+1);
            ans.push_back(1);
            if(i>0)
                ans.push_back(i+1);
        }
    }
    cout << ans.size() << " ";
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}
