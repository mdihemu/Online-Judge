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
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];

    vector<tuple<int, int, int>>v;
    for(int i=0;i<n;i++){
        int mn = i;
        for(int j=i+1;j<n;j++){
            if(a[j] < a[mn]){
                mn = j;
            }
        }

        if(mn > i){
            v.push_back({i, mn, mn - i});
            int temp = a[mn];
            for(int j=mn;j>i;j--){
                a[j] = a[j-1];
            }
            a[i] = temp;
        }
    }

    cout << v.size() << endl;
    for(auto [i, j, k]:v)
        cout << i+1 << " " << j+1 << " " << k << endl;
}

///Must see the constraints range
///Calculate the Time
