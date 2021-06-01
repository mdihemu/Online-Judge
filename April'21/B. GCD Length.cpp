#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)

const int MOD = 1e9+7;
const int INF = 2e5+5;
const int N = 205;

int value(int n)
{
    int ans = 1;
    n--;
    while(n--)
        ans *= 10;
    return ans;
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
    int a, b, c;
    cin >> a >> b >> c;
    int first = value(a);
    int second = value(b);
    int third = value(c);
    int last = value(c+1) - 1;
    for(int i=0;;i++){
        int check = __gcd(first, second);
        if(check>=third && check<=last){
            cout << first << " " << second << endl;
            return;
        }
        else
            first++, second++;
    }
}

///Must see the constraints range
///Calculate the Time
