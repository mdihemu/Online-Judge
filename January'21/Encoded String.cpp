#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
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
    char ok []= {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'};
    int n;
    cin >> n;
    string s, ans = "";
    cin >> s;
    for(int i=0;i<n;i+=4){
        int base = 0, temp = 8;
        for(int j=i;j<i+4;j++){
            base += (s[j] - '0') * temp;
            temp /= 2;
        }

        char ch = ('a'+base);
        cout << ch;
    }
    cout << endl;
}

///Must see the constraints range
///Calculate the Time
