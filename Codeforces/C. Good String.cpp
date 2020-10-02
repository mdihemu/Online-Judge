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
    string s;
    cin >> s;
    int n = s.size();
    int a[10] = {0};
    int cnt=0;
    set<int>m;
    for(int i=0;i<n;i++){
        char c = s[i];
        int x = (int)c;
        a[x]++;
    }
    for(int i=0;i<10;i++){
        if(a[i]>0)
            cnt++;
    }
    cout << cnt << endl;
}
