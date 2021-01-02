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
const int N = 1000*1000 + 1000;

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
    int a[n*k+1];
    int x = n*k;
    for(int i=1;i<=x;i++)
        cin >> a[i];
    int median = 0;
    int cnt = 0;

    reverse(a+1, a+x+1);
    int c = 0;

    if(n%2==0)
        median = n - (n/2) + 1;
    else
        median = n - (n/2);

    for(int i=median;i<=x;i+=median){
        cnt += a[i];
        c++;
        if(c==k)
            break;
    }

    cout << cnt << endl;
}
