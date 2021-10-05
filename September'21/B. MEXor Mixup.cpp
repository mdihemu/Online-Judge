#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)

const int MOD = 1e9+7;
const int INF = 3e5+5;
const int N = 205;

int temp[INF];

void solve();
int32_t main()
{
    IOS;
    cout << fixed << setprecision(10);

    temp[1] = 0;
    for(int i=2;i<=INF;i++)
        temp[i] = temp[i-1] ^ (i-1);

    int _ = 1;
    cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int a, b;
    cin >> a >> b;
    if(temp[a] == b)
        cout << a << endl;
    else if((temp[a] ^ a) == b)
        cout << a+2 << endl;
    else
        cout << a+1 << endl;
}

///Must see the constraints range
///Calculate the Time
