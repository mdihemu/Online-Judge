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
    int n,m;
    cin >> n >> m;
    vector<int>a(n),b(m);
    for(int &e:a)
        cin >> e;
    for(int &e : b)
        cin >> e;
    int cnt = 0;
    for(int i=0;i<n;i++){
        for(int j =0;j<m;j++){
            if(a[i] == b[j]){
                cnt = a[i];
                break;
            }
        }
    }
    if(cnt==0)
        cout << "NO\n";
    else{
        cout << "YES\n";
        cout << 1 << " " << cnt << endl;
    }
}
