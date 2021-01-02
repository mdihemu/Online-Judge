#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

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
    int a,b;
    cin >> a >> b;
    if(a%b){
        cout << a << endl;
        return;
    }

    vector<int>v;
    int n = b;
    for(int i=2;i*i<=n;i++){
        if(n%i)
            continue;
        while(n%i==0)
            n/=i;
        v.push_back(i);
    }
    if(n>1)
        v.push_back(n);

    int ans = 1;
    for(int aa:v){
        int temp = a;
        while(temp%b==0 && temp%aa==0)
            temp /= aa;
        ans = max(ans,temp);
    }

    cout << ans << endl;
}
