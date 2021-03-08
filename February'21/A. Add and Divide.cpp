#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)

const int INF = 1e9+5;
const int N = 205;

int divide(int a, int b)
{
    int cnt = 0;
    while(a>0){
        a/=b;
        cnt++;
    }
    return cnt;
}

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
    int a,b;
    cin >> a >> b;
    int mn = LONG_MAX;
    for(int i=0;i<1000;i++){
        if(b+i==1)
            continue;
        int cnt = divide(a,b+i) + i;
        if(cnt != 0)
            mn = min(cnt, mn);
    }
    cout << mn << endl;
}

///Must see the constraints range
///Calculate the Time
