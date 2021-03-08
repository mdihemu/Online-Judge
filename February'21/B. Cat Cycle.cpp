#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)

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
    int n, k;
    cin >> n >> k;

    if(n%2==0){
        int last = k % n;
        if(last == 0)
            last = n;
        cout << last << endl;
        return;
    }

    int circle = (k-1) / (n/2);
    int tot = k + circle;
    tot = tot % n;
    if(tot == 0)
        tot = n;
    cout << tot << endl;
    return;

}

///Must see the constraints range
///Calculate the Time
