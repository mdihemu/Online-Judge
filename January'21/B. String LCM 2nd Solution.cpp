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
    string s, t;
    cin >> s >> t;

    int a = s.size();
    int b = t.size();
    int gc = __gcd(a,b);
    int lcm = (a*b)/gc;

    string extra = "";
    int sz = lcm / a;
    while(sz--)
        extra += s;

    string check = "";
    int szz = lcm/b;
    while(szz--)
        check += t;

    if(extra == check)
        cout << extra << endl;
    else
        cout << "-1\n";

}

///Must see the constraints range
///Calculate the Time
