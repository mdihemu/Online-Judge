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
    cout << fixed << setprecision(20);
    int n;
    cin >> n;
    int cnt = 0;
    while(n--){
        int a,b;
        cin >> a >> b;
        int x = b-a;
        cnt += x*x;
    }
    cout << sqrt(cnt) << endl;
    return 0;
}
