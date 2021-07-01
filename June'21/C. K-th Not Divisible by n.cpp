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
    int n, k;
    cin >> n >> k;
    int l = 1, h = INT_MAX;
    int cnt = 0;

    while(l<=h){
        int mid = (l+h)/2;
        int temp = mid - mid / n;

        if(temp == k){
            cnt = mid;
            h = mid-1;
        }
        else if(temp > k){
            h = mid - 1;
        }
        else{
            l = mid + 1;
        }
    }
    cout << cnt << endl;
}

///Must see the constraints range
///Calculate the Time
