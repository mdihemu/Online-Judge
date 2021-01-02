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

void fair(int n)
{
    int temp = n;
    while(temp>0){
        int digit  = temp %10;
        if(digit!=0 && n%digit!=0){
            n++;
            fair(n);
        }
        else
            temp /= 10;
    }
    cout << n << endl;
    //return n;
}
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
    fair(n);
    //cout << fair(n) << endl;
}

///Must see the constraints range
///Calculate the Time
