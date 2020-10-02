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
    int a[51] = {0};
    vector<int> v(n*2),p;
    for(int &e:v)
        cin >> e;
    for(int i=0;i<n*2;i++){
        int x = v[i];
        if(a[x]==0){
            p.push_back(x);
            a[x]++;
        }
    }
    for (auto i = p.begin(); i != p.end(); ++i)
        cout << *i << " ";
    cout << endl;
}
