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
    cout << setprecision(20);
    //cout << fixed << setprecision(1);
    int _ = 1;
    //cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int n,m;
    cin >> n >> m;
    double root = sqrt(n*n - m*m);
    double result = root + m;
    result *= 1.0;
    printf("%.15lf\n", result);

//    if((int)result == result*1.0){
//        cout << fixed << setprecision(1) << result << endl;
//    }
//    else
//        cout << fixed << setprecision(15) << result << endl;
}

///Must see the constraints range
///Calculate the Time
