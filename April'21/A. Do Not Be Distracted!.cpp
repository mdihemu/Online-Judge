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
    int a[30] = {0};
    for(int i=0;i<s.size();i++){
        if(s[i] == s[i+1]){
            s.erase(i+1,1);
            i--;
        }
    }
    //cout << s << endl;
    sort(s.begin(), s.end());
    //cout << s << endl;
    bool ok = true;
    for(int i=0;i<s.size();i++){
        int x = s[i] - 'A';
        if(a[x] != 0){
            ok = false;
        }
        a[x]++;
    }
    if(ok)
        cout << "YES\n";
    else
        cout << "NO\n";
}

///Must see the constraints range
///Calculate the Time

