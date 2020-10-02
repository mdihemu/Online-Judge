#include<bits/stdc++.h>
using namespace std;

//#define int long long
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
    string s;
    cin >> s;
    int cnt=0,cnt1=0;
    for(int i=0;i<n;i++){
        if(s[i]%2==1){
            if(cnt==0)
                cnt = int(s[i]-48);
            else if(cnt1==0)
                cnt1 = int(s[i]-48);
            else
                break;
        }
    }
    if(cnt==0||cnt1==0)
        cout << -1 << endl;
    else{
        cout << cnt << cnt1 << endl;
    }
}
