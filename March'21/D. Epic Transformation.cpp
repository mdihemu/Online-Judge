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
    cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    map<int, int>m;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        m[a[i]]++;
    }
    int mx = 0;


    for(auto& i:m){
        if(i.second >mx)
            mx = i.second;
    }
    int ans = 0;
    int another = n - mx;
    if(mx > another)
        ans = mx - another;
    else if(mx == n)
        ans = n;
    else if(mx == another)
        ans = 0;
    else{
        if(n%2==1)
            ans = 1;
        else
            ans = 0;
    }
    cout << ans << endl;

//    vector<int>v;
//    for(auto& i:m)
//        v.push_back(i.second);
//    for(int i:v)
//        cout << i << " ";
//    cout << endl;
}

///Must see the constraints range
///Calculate the Time
