#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     all(v)      v.begin(), v.end()
#define     IN          freopen("input.txt",'r',stdin)

const int INF = 1e9+5;
const int N = 105;

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
    vector<int>cnt(105);
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        cnt[x]++;
    }
    int ans = 0;
    for(int i=0;i<cnt.size();i++){
        if(cnt[i]>=2)
            ans++;
        else
            break;
    }
    for(int i=0;i<cnt.size();i++){
        if(cnt[i]>=1)
            ans++;
        else
            break;
    }
    cout << ans << endl;
}
/*
void solve()
{
    int n;
    cin >> n;
    int a[N] = {0},v[N] = {0}, vv[N] = {0};

    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        a[x]++;
    }

    for(int i=0;i<101;i++){
        if(a[i] == 1){
            v[i] = 1;
        }
        else if(a[i] >= 2){
            v[i] = 1;
            vv[i] = 1;
        }
    }
    int cnt = 0;
    for(int i=0;i<101;i++){
        if(v[i] == 0){
            cnt += i;
            break;
        }
    }
    for(int i=0;i<101;i++){
        if(vv[i] == 0){
            cnt += i;
            break;
        }
    }
    cout << cnt << endl;
}
*/
///Must see the constraints range
///Calculate the Time
