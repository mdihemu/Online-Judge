#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     all(v)      v.begin(), v.end()
#define     IN          freopen("input.txt",'r',stdin)

const int INF = 1e9+5;
const int N = 105;

int maxsum(int a[],int n)
{
    int v[N] = {0};
    v[0] = a[0];
    for(int i=1;i<n;i++){
        v[i] = v[i-1] + a[i];
    }
    int mx = *max_element(v,v+n);
    return mx;
}

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
    int a[N];
    for(int i=0;i<n;i++)
        cin >> a[i];

    int cnt = maxsum(a,n);
    cnt = max(0LL, cnt);

    int m;
    cin >> m;
    int b[N];
    for(int i=0;i<m;i++)
        cin >> b[i];

    int cnt2 = maxsum(b,m);
    cnt2 = max(0LL, cnt2);

    cout << cnt+cnt2 << endl;
}

///Must see the constraints range
///Calculate the Time
