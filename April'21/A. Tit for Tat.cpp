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
    int n, k;
    cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    //sort(a, a+n);
    int sum = 0;
    for(int i=0;i<n-1;i++){
        int x = a[i];
        int mx = min(k, x);
        sum += mx;
        a[i] = a[i]-mx;
        k-= mx;
        if(!k)
            break;
    }
    a[n-1] += sum;
    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

///Must see the constraints range
///Calculate the Time
