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
    int mh, mm;
    cin >> mh >> mm;
    string s;
    cin >> s;
    bool ok[100] = {false};
    for(int i=1;i<90;i++){
        int f = i%10;
        int s = (i/10)%10;
        if((f==0 || f==1 || f==2 || f==5 || f==8) && (s==0 || s==1 || s==2 || s==5 || s==8))
            ok[i] = true;
    }

}

///Must see the constraints range
///Calculate the Time
