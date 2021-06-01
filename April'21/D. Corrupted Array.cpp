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
    int m = n+2;
    int b[m];
    for(int i=0;i<m;i++)
        cin >> b[i];
    sort(b, b+m);
    int sum = 0;
    for(int i=0;i<n;i++)
        sum += b[i];
    if(sum == b[n]){
        for(int i=0;i<n;i++)
            cout << b[i] << " ";
        cout << endl;
        return;
    }
    sum += b[n];
    for(int i=0;i<m-1;i++){
        if(sum - b[i] == b[n+1]){
            for(int ii=0;ii<m-1;ii++){
                if(i != ii)
                    cout << b[ii] << " ";
            }
            cout << endl;
            return;
        }
    }
    cout << "-1\n";
}

///Must see the constraints range
///Calculate the Time
