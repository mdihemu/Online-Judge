#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)

const int INF = 1e9+5;
const int N = 205;

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
    int n;
    cin >> n;
    int v[n];
    for(int i=0;i<n;i++){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        v[i] = a+b+c+d;
    }

    int tot = v[0];
    sort(v, v+n, greater<int>());
    for(int i=0;i<n;i++){
        if(tot == v[i]){
            tot = i+1;
            break;
        }
    }
    cout << tot << endl;
}

///Must see the constraints range
///Calculate the Time
