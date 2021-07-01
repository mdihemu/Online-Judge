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
    int n;
    cin >> n;
    int a[110];
    for(int i=0;i<101;i++)
        a[i] = i;
    for(int i=1;i<=100;i++){
        if(i%2==1){
            swap(a[i], a[i+1]);
        }
    }
    if(n%2==1){
        a[n] = a[n-1];
        a[n-1] = a[n+1];
    }
    for(int i=1;i<=n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

///Must see the constraints range
///Calculate the Time
