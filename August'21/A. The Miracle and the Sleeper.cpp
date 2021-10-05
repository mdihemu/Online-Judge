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
    int a, b;
    cin >> a >> b;
    if(b>a)
        swap(a,b);
    if(a==b){
        cout << 0 << endl;
        return;
    }
    int x = a/2;
    if(x>=b){
        if(a%2==0){
            cout << x-1 << endl;
        }
        else{
            cout << x << endl;
        }
    }
    else{
        if(a%b==0){
            cout << a%b - 1 << endl;
        }
        else{
            cout << a%b << endl;
        }
    }
}

///Must see the constraints range
///Calculate the Time
