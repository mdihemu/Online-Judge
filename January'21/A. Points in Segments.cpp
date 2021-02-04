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
    int n,m;
    cin >> n >> m;
    int a[101];
    memset(a, 0, sizeof(a));
    for(int i=0;i<n;i++){
        int l, r;
        cin >> l >> r;
        for(int j=l;j<=r;j++){
            a[j] = 1;
        }
    }

    int tot = 0;
    vector<int>v;
    for(int i=1;i<=m;i++){
        if(a[i] == 0){
            v.push_back(i);
        }
    }

    cout << v.size() << endl;
    for(int i:v)
        cout << i << " ";
    cout << endl;
}

///Must see the constraints range
///Calculate the Time
