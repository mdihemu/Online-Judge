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
    int n,k;
    cin >> n >> k;
    string s, ss;
    cin >> s >> ss;
    int a[27],b[27];
    memset(a,0,sizeof a);
    memset(b,0,sizeof b);

    for(int i=0;i<n;i++){
        a[s[i] - 'a']++;
        b[ss[i] - 'a']++;
    }
    bool ok = true;
    for(int i=0;i<26;i++){
        if(a[i]<b[i]){
            ok = false;
            break;
        }
        a[i] -= b[i];
        if(a[i]%k==0)
            a[i+1] += a[i];
    }
    if(a[26])
        ok = false;
    if(ok)
        cout << "YES\n";
    else
        cout << "NO\n";
}
