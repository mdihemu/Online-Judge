#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
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
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    int i=0, j=n-1, cnt = 0;
    while(i<j && s[i] == s[j]){
        i++;
        j--;
        cnt++;
    }
    if(cnt>=k && n>2*k){
        cout << "YES\n";
    }
    else
        cout << "NO\n";
}

///Must see the constraints range
///Calculate the Time
