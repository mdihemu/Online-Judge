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
    int n, w;
    cin >> n >> w;
    int mn = (w+1) / 2;
    vector< pair< int, int> > v;
    for(int i=1;i<=n;i++){
        int x;
        cin >> x;
        v.push_back({x,i});
    }

    sort(v.begin(), v.end());
    while(v.size() && v.back().first > w)
        v.pop_back();

    vector<int>ans;
    int sum = 0;
    while(v.size()){
        int x = v.back().first;
        sum += x;
        ans.push_back(v.back().second);
        v.pop_back();
        if(sum >= mn)
            break;
    }
    if(sum < mn)
        cout << "-1\n";
    else{
        sort(ans.begin(), ans.end());
        cout << ans.size() << endl;
        for(int i:ans)
            cout << i << " ";
        cout << endl;
    }
}

///Must see the constraints range
///Calculate the Time
