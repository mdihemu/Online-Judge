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

int minReplacement(string s, int len)
{
    int ans = 0;
    for (int i = 0; i < len; i++) {

        // If there is 1 at even index positions
        if (i % 2 == 0 && s[i] == '1')
            ans++;

        // If there is 0 at odd index positions
        if (i % 2 == 1 && s[i] == '0')
            ans++;
    }
    return min(ans, len - ans);
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
    string s = "";
    int even =0, odd=0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x%2==0){
            s += '0';
            even++;
        }
        else{
            s += '1';
            odd++;
        }
    }
    int x = abs(even - odd);
    if(x>1){
        cout << "-1\n";
        return;
    }
    cout << minReplacement(s, n) << endl;
}

///Must see the constraints range
///Calculate the Time
