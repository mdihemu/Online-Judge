#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int n,m,r;
    cin >> n >> m >> r;

    int buy = 1010;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        buy = min(buy,x);
    }
    int num = r/buy;
    int tk = r - (num*buy);

    int sell = 0;
    for(int i=0;i<m;i++){
        int x;
        cin >> x;
        sell = max(sell,x);
    }

    int cnt = max(r,sell*num +tk);
    cout << cnt << endl;
}
