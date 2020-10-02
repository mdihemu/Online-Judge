#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int n;
    cin >> n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        v.push_back({x,i+1});
    }

    sort(v.rbegin(),v.rend());

    int cnt=1;
    for(int i=1;i<n;i++)
        cnt += v[i].first*i+1;

    cout << cnt << endl;

    for(int i=0;i<n;i++)
        cout << v[i].second << " ";
    cout << endl;
    return 0;
}
