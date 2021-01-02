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

const int INF = 1e12+5;
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
    vector<int>t(n), x(n);
    for(int i=0;i<n;i++)
        cin >> t[i] >> x[i];
    t.push_back(INF);

    int last=0, target = 0, now = 0, cnt=0;
    for(int i=0;i<n;i++){
        if(last <=t[i]){
            target = x[i];
            last = t[i] + abs(target - now);
        }
        int temp = now;
        int nothing = min(last - t[i] , t[i+1]-t[i]);
        if(now < target)
            now += nothing;
        else
            now -= nothing;

        if(min(temp, now) <= x[i] && x[i]<=max(temp,now))
            cnt++;
    }
    cout << cnt << endl;
}

///Must see the constraints range
///Calculate the Time
