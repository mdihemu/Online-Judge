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
    ///cin >> _;
    while(_--) solve();
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
    int mn = a[0],mi=0;
    int mx = a[0],ma=0;

    for(int i=1;i<n;i++){
        if(a[i]>mx){
            mx = a[i];
            ma = i;
        }
        if(a[i]<mn){
            mn = a[i];
            mi = i;
        }
    }
    swap(a[mi],a[ma]);
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
