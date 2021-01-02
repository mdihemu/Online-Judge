#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

const int INF = 1e9+5;
const int N = 205;

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
    int n;
    cin >> n;
    int a[4] = {0};
    for(int i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n);
    int cnt = 0;
    if(n==1)
        cnt = a[0];
    else if(n==2)
        cnt = a[1];
    else if(n==3)
        cnt = max(a[2],a[0]+a[1]);
    else if(n==4){
        int x = 0;
        int y = a[3];
        for(int i=2;i>=0;i--){
            if(x <= y){
                x += a[i];
            }
            else
                y += a[i];
        }
        cnt = max(x,y);
    }
    cout << cnt << endl;
}
