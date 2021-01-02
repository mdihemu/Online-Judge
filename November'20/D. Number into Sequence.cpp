#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     pb          push_back
#define     mp          make_pair
#define     all(v)      v.begin(), v.end()
#define     IN          freopen("input.txt",'r',stdin)

const int INF = 1e9+5;
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
    cin >> n;
    vector<int>v;
    if(isprime(n)){
        cout << 1 << "\n" << n << endl;
        return;
    }
    int prev = 2;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0 && i%prev==0 && (n/i)%prev == 0){
            v.push_back(i);
            n/=i;
            prev = i;
            //cout << prev << endl;
            i = 1;
        }

    }
    v.push_back(n);
    cout << v.size() << endl;
    for(auto it : v)
        cout << it << " ";
    cout << endl;
}
