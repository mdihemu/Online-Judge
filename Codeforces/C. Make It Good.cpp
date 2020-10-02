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
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    int cnt = n-1;
    while(cnt>0){
        if(a[cnt-1]>=a[cnt])
            cnt--;
        else
            break;
    }
    while(cnt>0){
        if(a[cnt-1]<=a[cnt])
            cnt--;
        else
            break;
    }
    cout << cnt << endl;
}
