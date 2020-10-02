#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int t=1; cin >> t;
    while(t--) solve();
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    vector<int>a(n);
    for(int &e:a)
        cin >> e;

    sort(a.rbegin(),a.rend());

    for(int e:a)
        cout << e << " ";
    cout << endl;
}
