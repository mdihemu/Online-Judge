#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)

const int MOD = 1e9+7;
const int INF = 2e5+5;
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
    vector<int>even, odd;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x%2==0){
            even.push_back(x);
        }
        else{
            odd.push_back(x);
        }
    }
    int ee = even.size();
    int oo = odd.size();
    if(ee){
        for(int i:even){
            cout << i << " ";
        }
    }
    if(oo){
        for(int i:odd){
            cout << i << " ";
        }
    }
    cout << endl;
}

///Must see the constraints range
///Calculate the Time
