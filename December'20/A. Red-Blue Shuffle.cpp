#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
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
    cin >> n;
    string r,b;
    cin >> r >> b;
    int cnt=0, cnt2=0;
    for(int i=0;i<n;i++){
        int x = r[i] - '0';
        int y = b[i] - '0';
        if(x>y)
            cnt++;
        else if(x<y)
            cnt2++;
    }
    if(cnt>cnt2)
        cout << "RED\n";
    else if(cnt <cnt2)
        cout << "BLUE\n";
    else
        cout << "EQUAL\n";
}

///Must see the constraints range
///Calculate the Time
