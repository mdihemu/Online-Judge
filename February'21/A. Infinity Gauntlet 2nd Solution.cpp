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
    //cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    map<string, string > m;
    map<string, string > :: iterator it;

    m["purple"] = "Power";
    m["green"] = "Time";
    m["blue"] = "Space";
    m["orange"] = "Soul";
    m["red"] = "Reality";
    m["yellow"] = "Mind";

    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        m.erase(s);
    }

    cout << m.size() << endl;
    for(it = m.begin(); it!=m.end();it++)
        cout << it->second << endl;
}

///Must see the constraints range
///Calculate the Time
