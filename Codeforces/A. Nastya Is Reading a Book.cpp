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
    int a[n][2];
    for(int i=0;i<n;i++){
        cin >> a[i][0] >> a[i][1];
    }
    int k=0,cnt=0;
    cin >> k;
    for(int i=0;i<n;i++){
        int x = a[i][1];
        if(x<k)
            cnt++;
    }
    cout << n - cnt << endl;
}
