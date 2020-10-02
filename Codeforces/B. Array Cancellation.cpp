#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int N = 1e5+7;

void solve();
int32_t main()
{
    IOS;
    int _=1;
    cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int n,cnt=0;
    cin >> n;
    int a[N];
    for(int i=1;i<=n;i++)
        cin >> a[i];

    int pos=0,neg=0;
    for(int i=1;i<=n;i++){
        if(a[i]>=0)
            pos+= a[i];
        else{
            neg = abs(a[i]);
            int mn = min(pos,neg);
            pos-=mn;
            neg-=mn;
            cnt += neg;
        }
    }
    cout << cnt << endl;
}
