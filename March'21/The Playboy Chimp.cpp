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
    //IOS;
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
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    int queries;
    cin >> queries;
    while(queries--){
        int check;
        cin >> check;
        int mn = lower_bound(a, a+n, check) - a - 1;
        int mx = upper_bound(a, a+n, check) - a;
        if(mn>=0 && mx>=n)
            cout << a[mn] << " X\n";
        else if(mn>=0 && mn<n && mx>=0 && mx<n)
            cout << a[mn] << " " << a[mx] << endl;
        else if(mn<0 && mx<n)
            cout << "X " << a[mx] << endl;
        else
            cout << "X X\n";
    }
}

///Must see the constraints range
///Calculate the Time
