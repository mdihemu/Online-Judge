#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)

const int INF = 1e9+5;
const int N = 1e6+5;

bool prime[N];
int digitprime[N];
int sum(int n)
{
    int cnt = 0;
    while(n){
        int temp = n%10;
        n /= 10;
        cnt += temp;
    }
    return cnt;
}

void seive()
{
    memset(prime, true, sizeof(prime));
    memset(digitprime, 0, sizeof(digitprime));

    prime[0] = prime[1] = false;
    for(int i=2;i<N;i++){
        digitprime[i] = digitprime[i-1];
        if(prime[i]){
            if(prime[sum(i)])
                digitprime[i]++;
            for(int j=i*i;j<N;j+=i)
                prime[j] = false;
        }
    }
}

void solve();
int32_t main()
{
    IOS;
    seive();
    cout << fixed << setprecision(10);
    int _ = 1;
    cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int a, b;
    cin >> a >> b;
    int mn = digitprime[a-1];
    int mx = digitprime[b];
    cout << mx - mn << endl;
}

///Must see the constraints range
///Calculate the Time
