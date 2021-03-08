#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)

const int INF = 1e9+5;
const int N = 10002;

map<int, bool > lol;

void solve();
int32_t main()
{
    IOS;

    for(int i=1;i<N;i++){
        lol[i*i*i] = true;
    }

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
    bool ok = true;
    for(int i=1;i<N;i++){
        if(lol[n - i*i*i] == true){
            cout << "YES\n";
            ok = false;
            break;
        }
    }
    if(ok)
        cout << "NO\n";
}

///Must see the constraints range
///Calculate the Time
