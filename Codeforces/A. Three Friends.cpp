#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int _=1; cin >> _;
    while(_--) solve();
    return 0;
}
int ans(int a,int b, int c)
{
    return abs(a-b) + abs(a-c) + abs(b-c);
}

void solve()
{
    int a,b,c;
    cin >> a >> b >> c;
    int cnt  = ans(a,b,c);
    for(int i = -1;i<=1;i++){
        for(int j=-1;j<=1;j++){
            for(int k=-1;k<=1;k++){
                int na = a+i;
                int nb = b+j;
                int nc = c+k;
                cnt = min(cnt,ans(na,nb,nc));
            }
        }
    }
    cout << cnt << endl;
}
