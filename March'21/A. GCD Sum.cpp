#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)

const int INF = 1e9+5;
const int N = 205;

int almost(int n)
{
    int sum = 0;
    while(n!=0){
        sum += n%10;
        n/=10;
    }
    return sum;
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
    bool ok = false;
    while(true){
        int sum = almost(n);
        if(__gcd(n, sum)>1){
            cout << n << endl;
            break;
        }
        else
            n++;
    }
}

///Must see the constraints range
///Calculate the Time
