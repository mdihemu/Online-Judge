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
    int n, m;
    cin >> n >> m;

    vector<int> k(n), c(m);
    for(int i=0;i<n;i++){
        cin >> k[i];
        k[i]--;
    }
    for(int i=0;i<m;i++)
        cin >> c[i];

    sort(k.rbegin(), k.rend());

    int cnt = 0;
    for(int i=0;i<n;i++){
        if(i<=k[i])
            cnt += c[i];
        else
            cnt += c[k[i]];
    }
    cout << cnt << endl;
}

///Must see the constraints range
///Calculate the Time
