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

vector<int>v;

void solve();
int32_t main()
{
    IOS;

    for(int i=1;i<1700;i++){
        if(i%3==0 || i%10==3){
            continue;
        }
        else{
            v.push_back(i);
        }
    }

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
    cout << v[n-1] << endl;
}

///Must see the constraints range
///Calculate the Time
