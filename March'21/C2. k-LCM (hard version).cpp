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
    int n, k;
    cin >> n >> k;
    int kk = k - 3;
    n-=kk;
    for(int i=0;i<kk;i++)
        cout << "1 ";
    if(n%2==1)
        cout << "1 " << n/2 << " " << n/2 << endl;
    else{
        if(n%4==0){
            n/=2;
            cout << n << " " << n/2 << " " << n/2 << endl;
        }
        else{
            n-=2;
            cout << "2 " << n/2 << " " << n/2 << endl;
        }
    }
}

///Must see the constraints range
///Calculate the Time
