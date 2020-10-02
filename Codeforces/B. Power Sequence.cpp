#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int N = 3e5+5;

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
    int a[N];
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    sort(a,a+n);
}
