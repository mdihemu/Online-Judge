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
    //cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    int one = 0, two = 0, zero = 0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        x = x%3;
        if(x==0)
            zero++;
        else if(x==1)
            one++;
        else if(x==2)
            two++;
    }

    cout << zero*(zero-1)/2 + one * two << endl;
}

///Must see the constraints range
///Calculate the Time
