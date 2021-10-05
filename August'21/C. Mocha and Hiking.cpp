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
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    if(a[0] == 1){
        cout << n+1 << " ";
        for(int i=1;i<=n;i++)
            cout << i << " ";
        cout << endl;
        //cout << endl;
        return;
    }

    for(int i=0;i<n-1;i++){
        if(a[i] == 0 && a[i+1] == 1){
            for(int ii=1;ii<=i+1;ii++){
                cout << ii << " ";
            }
            cout << n+1 << " ";
            for(int ii=i+2;ii<=n;ii++){
                cout << ii << " ";
            }
            cout << endl;
            return;
        }
    }

    for(int i=1;i<=n;i++)
        cout << i << " ";
    cout << n+1 << " ";
    cout << endl;
}

///Must see the constraints range
///Calculate the Time
