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
    int n,q;
    cin >> n >> q;
    string s;
    cin >> s;
    while(q--){
        int a,b;
        cin >> a >> b;
        char c = s[a-1], ch = s[b-1];
        int b0 = 0, b1=0, a0=0,a1=0;
        for(int i=0;i<a-1;i++){
            if(s[i] == '0')
                b0++;
            else
                b1++;
        }
        for(int i=b;i<n;i++){
            if(s[i] == '0')
                a0++;
            else
                a1++;
        }
        bool ok = false;
        if(c == '0' && b0>0){
            ok = true;
        }
        else if(c=='1' && b1>0)
            ok = true;
        else if(ch=='0' && a0>0)
            ok = true;
        else if(ch == '1' && a1>0)
            ok = true;
        if(ok){
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}
