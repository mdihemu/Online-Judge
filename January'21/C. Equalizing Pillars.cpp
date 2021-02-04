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

int32_t main()
{
    IOS;
    int n, q;
    cin >> n >> q;
    int a[n+1];
    for(int i=1;i<=n;i++)
        cin >> a[i];
    while(q--){
        int l, r;
        cin >> l >> r;
        double cnt = 0.0;
        for(int i=l;i<=r;i++){
            cnt += (1.0 / a[i]);
        }
        double range = (r-l+1) * 1.0;
        cnt = range / cnt;
        int cntt = cnt;
        cout << cntt << endl;
        int result = 0;
        for(int i=l;i<=r;i++)
            result += abs(cntt - a[i]);
        cout << result << endl;
    }
    return 0;
}
