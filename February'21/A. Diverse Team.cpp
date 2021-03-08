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
    int n, k;
    cin >> n >> k;
    set<int>s;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(!s.count(x)){
            s.insert(x);
            v.push_back(i+1);
        }
    }
    if(v.size()<k){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
    //cout << v.size() << endl;
    for(int i=0;i<k;i++)
        cout << v[i] << " ";
    cout << endl;
}

///Must see the constraints range
///Calculate the Time
