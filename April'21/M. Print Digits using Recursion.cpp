#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)

const int MOD = 1e9+7;
const int INF = 2e5+5;
const int N = 205;

vector<int>v;

void base(int n)
{
    if(n<10){
        v.push_back(n);
        return;
    }
    v.push_back(n%10);
    base(n/10);
}

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
    base(n);
    reverse(v.begin(), v.end());
    int nn=v.size();
    for(int i=0;i<nn;i++){
        if(i==nn-1)
            cout << v[i] << endl;
        else
            cout << v[i] << " ";
    }

    //cout << endl;
    v.clear();
}

///Must see the constraints range
///Calculate the Time
