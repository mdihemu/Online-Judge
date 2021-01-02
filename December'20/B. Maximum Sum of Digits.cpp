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

int digitsum(int a)
{
    int cnt = 0;
    while(a>0){
        cnt += a%10;
        a /= 10;
    }
    return cnt;
}

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

    int m = n;
    int digits = 0;
    while(m>0){
        digits++;
        m/=10;
    }
    digits--;
    int cnt = digits  * 9;
    int num = 0;
    while(digits--){
        num = num * 10 + 9;
    }
    cnt += digitsum(n-num);

    cout << cnt << endl;
}

///Must see the constraints range
///Calculate the Time
