#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    string s;
    cin >> s;
    for(int i=0;i<5;i++){
        string p;
        cin >> p;
        if((s[0] == p[0]) || (s[1] == p[1])){
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
}
