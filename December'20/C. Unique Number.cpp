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
    int n,cnt=0;
    cin >> n;
    if(n>45){
        cout << "-1\n";
        return;
    }
    vector<int>v;
    int k = 9;
    while(n>0){
        if(n>=k){
            v.push_back(k);
            n -= k;
            k--;
        }
        else{
            v.push_back(n);
            break;
        }
    }
    sort(all(v));
    for(int i:v)
        cout << i;
    cout << endl;
}
