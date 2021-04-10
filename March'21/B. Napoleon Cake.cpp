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
    vector<int>a(n);
    for(int i=0;i<n;i++)
        cin >> a[i];
    int temp = 0;
    for(int i=n-1;i>=0;i--){
        temp = max(temp, a[i]);
        if(temp>0){
            a[i] = 1;
            temp--;
        }
        else
            a[i] = 0;
    }
    for(int i=0;i<n;i++)
        cout << a[i] << " ";
    cout << endl;
}

///Must see the constraints range
///Calculate the Time
