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
    int aa[26]={0};
    int aaa = n;
    while(n--){
        string s;
        cin >> s;
        int n = s.size();
        for(int i=0;i<n;i++){
            aa[s[i]-'a']++;
        }
    }
    bool ok = true;
    for(int i=0;i<26;i++){
        if(aa[i] == 0)
            continue;
        if(aa[i]%aaa==0)
            ok = true;
        else{
            ok = false;
            break;
        }
    }
    if(ok)
        cout << "YES\n";
    else
        cout << "NO\n";
}
