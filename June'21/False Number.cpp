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
    string s;
    cin >> s;
    if(s[0] == '1'){
        cout << "10";
        for(int i=1;i<s.size();i++){
            cout << s[i];
        }
        cout << endl;
    }
    else{
        string t = "1";
        t += s;
        cout << t << endl;
    }
}

///Must see the constraints range
///Calculate the Time
