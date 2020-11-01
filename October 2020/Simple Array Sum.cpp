#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int n,a[1005];
void solve();
int32_t main()
{
    IOS;
    int _=1;
    //cin >> _;
    while(_--) solve();
    return 0;
}

int sum()
{
    int summ=0;
    for(int i=0;i<n;i++)
        summ += a[i];
    return summ;
}
void solve()
{
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> a[i];
    cout << sum() << endl;
}
