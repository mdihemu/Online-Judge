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
    int n,k;
    cin >> n >> k;
    vector<pair<int, int>>v(n);
    for(int i=0;i<n;i++){
        cin >> v[i].first >> v[i].second;
    }

    bool ok = false;
    for(int i=0;i<n;i++){
        int mx = 0;
        for(int j=0;j<n;j++){
            mx = max(mx, abs(v[i].first - v[j].first) + abs(v[i].second - v[j].second));
        }
        if(mx<=k){
            ok = true;
            break;
        }
    }

    if(ok)
        cout << "1\n";
    else
        cout << "-1\n";
}
