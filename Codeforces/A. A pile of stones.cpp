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
    string s;
    cin >> s;

    int cnt=0,ans=0;
    for(int i=n-1;i>=0;i--){
        if(s[i] == '+')
            cnt++;
        else
            cnt--;
        ans = max(ans,cnt);
    }

    cout << ans << endl;

    return 0;
}
