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
    string p,h;
    cin >> p >> h;
    int n = p.size();
    int m = h.size();

    vector<int>cnt(26);
    for(int i=0;i<n;i++)
        cnt[p[i] - 'a']++;
    for(int i=0;i<m;i++){
        vector<int>cnt2(26);
        for(int j=i;j<m;j++){
            cnt2[h[j]-'a']++;
            if(cnt == cnt2){
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
}
