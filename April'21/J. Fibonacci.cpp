#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)

const int MOD = 1e9+7;
const int INF = 2e5+5;
const int N = 205;

int n;
int sum = 0;

int value(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return sum + value(n-1) + value(n-2);
}

void solve();
int32_t main()
{
    IOS;
    cout << fixed << setprecision(10);
    int _ = 1;
    //cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    cin >> n;
    cout << value(n) << endl;
}

///Must see the constraints range
///Calculate the Time
