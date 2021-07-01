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

    int cnt = 0;
    int zero = 0, one = 0, temp = 0;

    for(int i=0;i<s.size(); i++){
        int x = (s[i] - '0');
        if(x==0){
            zero = one + 1;
            one = 0;
            temp = 0;
        }
        else if(x==1){
            one = zero + 1;
            zero = 0;
            temp = 0;
        }
        else{
            swap(zero, one);
            zero++;
            one++;
            temp++;
        }
        cnt += one + zero - temp;
    }
    cout << cnt << endl;
}

///Must see the constraints range
///Calculate the Time
