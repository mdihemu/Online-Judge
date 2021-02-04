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

int32_t main()
{
    IOS;
    int n, s, d;
    cin >> n >> s >> d;
    int x[105], y[105];
    for(int i=0;i<n;i++)
        cin >> x[i] >> y[i];


    bool ok = false;
    for(int i=0;i<n;i++){
        if(x[i]<s && y[i]>d){
            ok = true;
            break;
        }
    }
    if(ok)
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}
