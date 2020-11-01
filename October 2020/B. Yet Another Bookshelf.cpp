#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int _ = 1;
    cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<n;i++){
        if(a[i] == 0)
            a[i] = 10;
        else{
            break;
        }
    }
    for(int i=n-1;i>=0;i--){
        if(a[i] == 0)
            a[i] = 10;
        else{
            break;
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i] == 0)
            cnt++;
    }
    cout << cnt << endl;
}
