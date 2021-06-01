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
    vector<int>v(n);
    for(int i=0;i<n;i++)
        cin >> v[i];

    int mn = *min_element(v.begin(), v.end());
    int cnt = 0;

    for(int x:v){
        if(mn == x)
            cnt++;
        if((mn&x)!=mn){
            cout << "0\n";
            return;
        }
    }

    int fact = 1;
    for(int i=1;i<n-1;i++)
        fact = (1LL*fact*i) % MOD;
    int ans = (1LL * cnt * (cnt-1)) % MOD;
    ans = (1LL * ans * fact) % MOD;
    cout << ans << endl;
}

///Must see the constraints range
///Calculate the Time
