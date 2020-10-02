#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define pb push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define IN freopen("input.txt","r",stdin);
#define OUT freopen("output.txt","w",stdout);

const int N = 2e5 + 5;

void solve();
void cf()
{
    int t; cin >> t; while(t--) solve();
}
int32_t main()
{
    IOS;
    cf();
    ///solve();
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt=0, ans=0, flag=0;
    for(int i=0; i<n; i++){
        if(s[i] == 'A')
            flag = 1, cnt = 0;
        else if(flag == 1){
            cnt++;
            ans = max(ans,cnt);
        }
    }
    cout << ans << endl;
}
