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
    map<int, int>mp;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        mp[x-i]++;
    }
    int cnt = 0;
    for(auto x:mp){
        cnt += (x.second * (x.second-1))/2;
    }
    cout << cnt << endl;
}

///Must see the constraints range
///Calculate the Time
