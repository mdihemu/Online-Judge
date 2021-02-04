#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     all(v)      v.begin(), v.end()
#define     IN          freopen("input.txt",'r',stdin)

const int INF = 1e9+5;
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
    int a[n];
    vector<int>v, vv, vvv(n);
    for(int i=0;i<n;i++){
        cin >> a[i];

    }
    sort(a, a+n, greater<int>());
    int bob = 0, alice = 0;
    for(int i=0;i<n;i++){
        if(i%2==0 && a[i]%2==0){
            alice += a[i];
        }
        else if(i%2==1 && a[i]%2==1)
            bob += a[i];
    }
    if(alice > bob)
        cout << "Alice\n";
    else if(bob > alice)
        cout << "Bob\n";
    else
        cout << "Tie\n";
}

///Must see the constraints range
///Calculate the Time
