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
    int cnt = 0;
    for(int i=0;i<n;i++)
        if(s[i] == '2')
            cnt++;
    if(cnt>0 && cnt<3){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";

    char a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            a[i][j] = '=';
        }
    }

    for(int i=0;i<n;i++)
        a[i][i] = 'X';

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << a[i][j];
        }
        cout << endl;
    }
}

///Must see the constraints range
///Calculate the Time
