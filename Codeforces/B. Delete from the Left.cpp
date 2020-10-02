#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    string s,t;
    cin >> s >> t;

    int n = s.size();
    int m = t.size();

    int cnt = n+m;;
    int x = min(n,m);
    for(int i=1;i<=x;i++){
        if(s[n-i]==t[m-i])
            cnt -= 2;
        else
            break;
    }

    cout << cnt << endl;
    return 0;
}
