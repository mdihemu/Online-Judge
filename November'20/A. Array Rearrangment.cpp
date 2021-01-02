#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    cout << fixed << setprecision(10);
    int _ = 1;
    cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int n,x;
    cin >> n >> x;
    int a[n],b[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<n;i++)
        cin >> b[i];
    sort(a,a+n);
    sort(b,b+n,greater<int>());
    bool ok = true;
    for(int i=0;i<n;i++){
        if(a[i]+b[i] <= x)
            continue;
        else{
            ok = false;
            break;
        }
    }
    if(ok)
        cout << "Yes\n";
    else
        cout << "No\n";
}
