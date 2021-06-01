#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)

const int INF = 1e9+7;
const int N = 2e5+7;

int toadd(int a, int b)
{
    if(a+b>=INF)
        return a + b - INF;
    else
        return a + b;
}

int a[N][10];

void solve();
int32_t main()
{
    IOS;

    for(int i=0;i<10;i++)
        a[0][i] = 1;
    for(int i=1;i<N;i++){
        for(int ii=0;ii<9;ii++){
            a[i][ii] = a[i-1][ii+1];
        }
        a[i][9] = toadd(a[i-1][1] , a[i-1][0]);
    }

    cout << fixed << setprecision(10);
    int _ = 1;
    cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    while(n){
        cnt = toadd(cnt, a[m][n%10]);
        n/=10;
    }
    cout << cnt << endl;
}

///Must see the constraints range
///Calculate the Time
