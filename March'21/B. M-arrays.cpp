#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)

const int INF = 1e9+5;
const int N = 1e5+4;

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
    map<int, int>mps;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        mps[x%m]++;
    }

    int cnt = 0;
    for(auto &x:mps){
        if(x.first == 0)
            cnt++;
        else if(2*x.first == m)
            cnt++;
        else if(2*x.first < m || mps.find(m - x.first) == mps.end()){
            int a = x.second;
            int b = mps[m-x.first];
            cnt += 1 + max(0LL, abs(a-b) - 1);
        }
    }
    cout << cnt << endl;
}

///Must see the constraints range
///Calculate the Time
