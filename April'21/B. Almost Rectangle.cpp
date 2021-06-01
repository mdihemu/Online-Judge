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
    char a[405][405];
    for(int i=0;i<n;i++){
        for(int ii=0;ii<n;ii++){
            cin >> a[i][ii];
        }
    }
    int fx = 0, fy = 0, sx = 0, sy = 0;
    bool ok = false;

    for(int i=0;i<n;i++){
        for(int ii=0;ii<n;ii++){
            if(a[i][ii] == '*'){
                if(!ok){
                    fx = i;
                    fy = ii;
                    ok = true;
                }
                else{
                    sx = i;
                    sy = ii;
                }
            }
        }
    }
    //cout << fx << fy << sx << sy << endl;
    if(fx == sx){
        if(fx == 0){
        a[n-1][fy] = '*';
        a[n-1][sy] = '*';
        }
        else{
            a[0][fy] = '*';
            a[0][sy] = '*';
        }
    }

    else if(fy == sy){
        if(fy == 0){
            a[fx][n-1] = '*';
            a[sx][n-1] = '*';
        }
        else{
            a[fx][0] = '*';
            a[sx][0] = '*';
        }
    }
    else{
        a[fx][sy] = '*';
        a[sx][fy] = '*';
    }

    for(int i=0;i<n;i++){
        for(int ii=0;ii<n;ii++){
            cout << a[i][ii];
        }
        cout << endl;
    }

}

///Must see the constraints range
///Calculate the Time
