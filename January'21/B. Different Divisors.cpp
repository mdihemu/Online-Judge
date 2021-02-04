#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)

const int INF = 1e9+5;
const int N = 1e6+5;

vector<int>v;

void seive()
{
    bool prime[N];
    memset(prime, true, sizeof(prime));

    for(int i=2;i*i<=N;i++){
        if(prime[i] == true){
            for(int j=i+i;j<=N;j+=i)
                prime[j] = false;
        }
    }
    for(int i=2; i<=N;i++){
        if(prime[i])
            v.push_back(i);
    }
}

void solve();
int32_t main()
{
    seive();
    IOS;
    cout << fixed << setprecision(10);
    int _ = 1;
    cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int d;
    cin >> d;
    int up = *upper_bound(v.begin(), v.end(), d);
    int down = *lower_bound(v.begin(), v.end(), up+d);

    cout << up*down << endl;
}

///Must see the constraints range
///Calculate the Time
