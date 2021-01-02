#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     pb          push_back
#define     mp          make_pair
#define     all(v)      v.begin(), v.end()
#define     IN          freopen("input.txt",'r',stdin)

const int INF = 1e5+5;
const int N = 205;

int a[INF];

void solve();
int32_t main()
{
    IOS;
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
    int ok = 0;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        ok ^= a[i];
    }
    if(n%2==0 && ok != 0){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    if(n&1){
        cout << (n/2)*2 << endl;
        for(int i=2;i<=n;i+=2)
            cout << "1 " << i << " " << i+1 << endl;
        for(int i=n;i>1;i-=2)
            cout << "1 " << i-1 << " " << i << endl;
    }
    else{
        cout << n-2 << endl;
        for(int i=2;i<n;i+=2){
            cout << "1 " << i << " " << i+1 << endl;
            cout << i << " " << i+1 << " " << n << endl;
        }
    }
}
