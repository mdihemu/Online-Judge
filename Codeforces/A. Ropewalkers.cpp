#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int a,b,c,d;
    int n[3];
    cin >> n[0] >> n[1] >> n[2] >> d;

    sort(n,n+3);
    a = n[0],b=n[1], c=n[2];

    int x = 0;
    cout << max(x,d-(b-a)) + max(x,d-(c-b)) << endl;
    return 0;
}
