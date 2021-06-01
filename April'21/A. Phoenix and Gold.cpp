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
    int n, x;
    cin >> n >> x;
    int a[n];
    int tot = 0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        tot += a[i];
    }
    if(tot == x){
        cout << "NO\n";
    }
    else{
        cout << "YES\n";
        bool ok = false;

        int sum = 0;
        for(int i=0;i<n-1;i++){
            sum += a[i];
            if(sum == x){
                sum -= a[i];
                sum += a[i];
                swap(a[i], a[i+1]);
            }
        }
        for(int i=0;i<n;i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}

///Must see the constraints range
///Calculate the Time
