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
    int a[n+1],b[n+1]={0};
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }

    vector<int>v;
    v.push_back(a[1]);
    b[a[1]]++;

    for(int i=2;i<=n;i++){
        if(a[i] != a[i-1]){
            v.push_back(a[i]);
            b[a[i]]++;
        }
    }
    b[v[0]]--;
    b[v.back()]--;

    int mn = LLONG_MAX;
    for(auto it : v){
        mn = min(b[it]+1,mn);
    }
    cout << mn << endl;
}
