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

bool isprime(int n)
{
    if(n<=1)return false;   if(n==2)return true;   if(n>2 && n%2==0)return false;
    int div = sqrt(n);    for(int i=3;i<=div;i+=2)if(n%i==0)return false;
    return true;
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
    string s;
    cin >> n >> s;
    for(int i=0;i<n;i++){
        if( (s[i] == '4') || (s[i] == '6') || (s[i] == '8') || s[i] == '1' || s[i] == '9'){
            cout <<"1\n" << s[i] << endl;
            return;
        }
    }

    for(int i=0;i<n-1;i++){
        int x = s[i] - 48;
        x *= 10;
        for(int j=i+1;j<n;j++){
            int y = s[j] - 48;
            if(!isprime(x+y)){
                cout << 2 << endl;
                cout << x+y << endl;
                return;
            }
        }
    }
}

///Must see the constraints range
///Calculate the Time
