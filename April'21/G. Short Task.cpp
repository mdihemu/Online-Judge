#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)

const int INF = 1e7+5;
const int N = 205;

int a[INF];
int cnt[INF];

void solve();
int32_t main()
{
    IOS;
    memset(cnt, -1, sizeof cnt);
    for(int i=1;i<INF;i++){
        for(int j=i;j<INF;j+=i){
            a[j] += i;
        }
        if(a[i]<INF && cnt[a[i]] == -1)
            cnt[a[i]] = i;
    }
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
    cout << cnt[n] << endl;
}

///Must see the constraints range
///Calculate the Time
