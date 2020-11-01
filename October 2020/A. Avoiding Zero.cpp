#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    cout << fixed << setprecision(10);
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
    int sum = 0;
    for(auto &it : a){
        cin >> it;
        sum += it;
    }
    if(sum == 0)
        cout << "NO\n";
    else{
        cout << "YES\n";
        if(sum < 0)
            sort(a.begin(),a.end());
        else
            sort(a.rbegin(),a.rend());
        for(auto it : a)
            cout << it << " ";
        cout << endl;
    }
}
