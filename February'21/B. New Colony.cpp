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
    int n,k;
    cin >> n >> k;

    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];

    if(k>10100){
        cout << -1 << endl;
        return;
    }
    //vector<int>v;
    for(int kk=0;kk<k-1;kk++){
        for(int i=0;i<n-1;i++){
            if(a[i]<a[i+1]){
                a[i]++;
                break;
            }
        }
    }
    int pos = -1;
    for(int i=0;i<n-1;i++){
        if(a[i]<a[i+1]){
            pos = i+1;
            break;
        }
    }
    cout << pos << endl;
}

///Must see the constraints range
///Calculate the Time
