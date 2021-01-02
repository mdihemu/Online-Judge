#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     pb          push_back
#define     mp          make_pair
#define     all(v)      v.begin(), v.end()
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
    int n;
    string s;
    cin >> n >> s;
    n--;
    if(s[0] == '2' && s[n-2] == '0' && s[n-1] == '2' && s[n] == '0')
        cout << "YES\n";
    else if(s[0] == '2' && s[1] == '0' && s[n-1] == '2' && s[n] == '0')
        cout << "YES\n";
    else if(s[0] == '2' && s[1] == '0' && s[2] == '2' && s[n] == '0')
        cout << "YES\n";
    else if(s[0] == '2' && s[1] == '0' && s[2] == '2' && s[3] == '0')
        cout << "YES\n";
    else if(s[n-3] == '2' && s[n-2] == '0' && s[n-1] == '2' && s[n] == '0')
        cout << "YES\n";
    else
        cout << "NO\n";

}
