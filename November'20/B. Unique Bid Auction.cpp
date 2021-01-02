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
    int a[n+1],b[n+1]={0};
    for(int i=1;i<=n;i++){
        int x;
        cin >> x;
        a[i] = x;
        b[x] = b[x]+1;
    }
    int x = 0;

//    for(int i=1;i<=n;i++)
//        cout << b[i] << " ";
//    cout << endl;
//    sort(b+1,b+n+1);

    for(int i=1;i<=n;i++){
        if(b[i] == 1){
            x = i;
            break;
        }
    }
    bool ok = false;
    for(int i=1;i<=n;i++){
        if(a[i] == x){
            cout << i << endl;
            ok = true;
            break;
        }
    }
    if(!ok){
        cout << "-1\n";
    }
}
