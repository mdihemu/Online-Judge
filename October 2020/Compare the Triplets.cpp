#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int _=1;
    //cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int a[3],b[3];
    cin >> a[0] >> a[1] >> a[2] >> b[0] >> b[1] >> b[2];
    int cnt=0,cnt1=0;
    for(int i=0;i<3;i++){
        if(a[i]>b[i])
            cnt++;
        if(a[i]<b[i])
            cnt1++;
    }
    cout << cnt << " " << cnt1 << endl;
}
