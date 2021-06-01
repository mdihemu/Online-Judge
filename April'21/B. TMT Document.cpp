#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)

const int MOD = 1e9+7;
const int INF = 2e5+5;
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
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = n/3;
    int cnts = count(s.begin(), s.end(),'M');
    if(cnt != cnts){
        cout << "NO\n";
        return;
    }
    if(s[0]=='M' || s[n-1]=='M'){
        cout << "NO\n";
        return;
    }

    int ft = 0, fm = 0;
    for(int i=0;i<n;i++){
        if(s[i] == 'T')
            ft++;
        else
            fm++;
        if(fm>ft){
            cout << "NO\n";
            return;
        }
    }

    reverse(s.begin(), s.end());
    ft = 0,fm = 0;
    for(int i=0;i<n;i++){
        if(s[i] == 'T')
            ft++;
        else
            fm++;
        if(fm>ft){
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

///Must see the constraints range
///Calculate the Time
