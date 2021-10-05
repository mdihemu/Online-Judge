#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         int long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)

const int MOD = 1e9+7;
const int INF = 2e5+5;
const int N = 205;

vector<int>v;

void primeFactors(int n)
{
    while (n % 2 == 0){
        v.push_back(2);
        n = n/2;
    }

    for (int i = 3; i <= sqrt(n); i = i + 2){
        while (n % i == 0){
            v.push_back(i);
            n = n/i;
        }
    }

    if (n > 2)
        v.push_back(n);
}

void solve();
int32_t main()
{
    IOS;
    cout << fixed << setprecision(10);
    int _ = 1;
    //cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int p, q;
    cin >> p >> q;
    int mn = min(p, q);
    primeFactors(q);
    if(p>=q){
        int cnt = 0;
        for(int i:v)
            cnt += i;
        cout << p - cnt << " 1\n";
    }
    else{
        int sum = 0;
        for(int i:v){
            if(p>i){
                p -= i;
                q /= i;
            }
        }
        cout << p << " " << q << endl;
    }
}

///Must see the constraints range
///Calculate the Time
