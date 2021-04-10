#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)

const int INF = 2e5+5;
const int N = 205;

int a[INF];
int n, m;
string s, t;

bool check(int x)
{
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]<x)
            continue;
        if(s[i] == t[j])
            j++;
        if(j == t.size())
            return 1;
    }
    return 0;
}

void solve();
int32_t main()
{
    IOS;
    cout << fixed << setprecision(10);
    int _ = 1;
    //cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    //string s, t;
    cin >> s >> t;
    n = s.size();
    m = t.size();
    memset(a, 0, sizeof(a));
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        x--;
        a[x] = i;
    }
//    for(int i=0;i<n;i++)
//        cout << a[i];

    int l = 0, r = n;
    while(l<=r){
        int mid = (l+r)/2;
        if(check(mid)){
            l = mid+1;
        }
        else{
            r = mid-1;
        }
    }
    cout << l-1 << endl;
}

///Must see the constraints range
///Calculate the Time
