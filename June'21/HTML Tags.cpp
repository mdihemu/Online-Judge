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
    string s;
    cin >> s;
    int n = s.size();
    bool ok = true;
    if(s[0] == '<' && s[1] == '/' && s[n-1] == '>' && n>3){
        for(int i=2;i<n-1;i++){
            int x = s[i];
            if((x>=97 && x<=122) || (x>=48 && x<=57)){
                ok = true;
            }
            else{
                ok = false;
                break;
            }
        }
        if(ok){
            cout << "Success\n";
        }
        else{
            cout << "Error\n";
        }
    }
    else{
        cout << "Error\n";
    }
}

///Must see the constraints range
///Calculate the Time
