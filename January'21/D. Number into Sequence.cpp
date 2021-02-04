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

    vector< pair< int, int> >v;
    for(int i=2; i*i<=n;i++){
        int cnt = 0;
        while(n%i==0){
            cnt++;
            n/=i;
        }
        if(cnt>0)
            v.push_back({cnt, i});
    }
    if(n>1)
        v.push_back({1,n});

    sort(v.rbegin(), v.rend());

    vector<int>ans(v[0].first, v[0].second);
    for(int i=1;i<v.size();i++){
        for(int j=0;j<v[i].first;j++){
            ans.back() *= v[i].second;
        }
    }

    cout << ans.size() << endl;
    for(int i:ans)
        cout << i << " ";
    cout << endl;
}

///Must see the constraints range
///Calculate the Time
