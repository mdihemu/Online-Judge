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
    int n, k;
    cin >> n >> k;
    int slow = (n+1)/2;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];

    int cnt = 0;
    for(int i=0;i<n;i++){
        if(a[i] > -1)
            cnt++;
    }
//    cout << cnt << endl;
//    cout << slow << endl;
    if(cnt < slow){
        cout << "Rejected\n";
        return;
    }

    bool ok = false;
    for(int i=0;i<n;i++){
        if(a[i]>k){
            ok = true;
            break;
        }
    }
    if(ok){
        cout << "Too Slow\n";
        return;
    }

    cnt = *max_element(a, a+n);
    int cnt2 = *min_element(a, a+n);
    if(cnt <= 1 && cnt2 >-1)
        cout << "Bot\n";
    else
        cout << "Accepted\n";
}

///Must see the constraints range
///Calculate the Time
