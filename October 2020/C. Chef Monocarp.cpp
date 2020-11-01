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
    int a[n+1];
    for(int i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n);
    int value = a[0] + a[n-1];
    value /= 2;
    int cnt = 0;
    for(int i=0;i<n;i++){
        cnt += abs(a[i]-(i+1));
    }
    cout << cnt << endl;
}
