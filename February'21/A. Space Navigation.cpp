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
    int x, y;
    cin >> x >> y;
    int xx = abs(x), yy = abs(y);
    string s;
    cin >> s;
    int u = 0, d= 0, r=0,l=0;

    for(int i=0;i<s.size();i++){
        if(s[i] == 'U')
            u++;
        else if(s[i] == 'D')
            d++;
        else if(s[i]=='R')
            r++;
        else if(s[i] == 'L')
            l++;
    }
    if((x>=0 && y>=0 && r>=xx && u>=yy) || (x>=0 && y<=0 && r>=xx && d>=yy) ||
       (x<=0 && y>=0 && l>=xx && u>=yy) || (x<=0 && y<=0 && l>=xx && d>=yy)){
        cout << "YES\n";
    }
    else
        cout << "NO\n";
}

///Must see the constraints range
///Calculate the Time
