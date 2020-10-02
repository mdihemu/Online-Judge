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
    int cnt = n;
    cnt += (n*(n-1))/2;
    for(int i=3;i<=n;i++){
        cnt += i-1 + __gcd(i-1,i-2);
    }
    cout << cnt << endl;
    return 0;
}
