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
    double cnt = 0;

    for(int i=1;i<=n;i++){
        cnt += 1.0/i;
    }

    cout << fixed << setprecision(12) << cnt << endl;
}
