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
    int n,a,b,x;
    cin >> n >> a >> b >> x;
    string s;
    cin >> s;
    int cn = 0;
    for(int i=0;i<n;i++){
        if(s[i] == '0')
            cn++;
    }
    int cnt = n-cn;
    int total = cn * a + cnt * b;

    int tot = cn * a;
    if(a<=b+x){
        tot += cnt * (a+x);
    }
    else{
        tot += cnt * b;
    }
    total = min(total, tot);
    tot = 0;
    tot = cnt * b;
    if(b<=a+x){
        tot += cn * (b+x);
    }
    else{
        tot += cn * a;
    }
    total = min(total, tot);
    cout << total << endl;
}
