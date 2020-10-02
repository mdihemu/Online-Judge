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
    int cnt=0,ans=0;
    if(n%2==0){
        cnt = n/2;
        while(cnt--){
            cout << 1;
        }
    }
    else{
        cout << 7;
        n-=3;
        cnt = n/2;
        while(cnt--){
            cout << 1;
        }
    }
    cout << endl;
}
