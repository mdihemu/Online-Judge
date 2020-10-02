#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define pb push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define IN freopen("input.txt","r",stdin);
#define OUT freopen("output.txt","w",stdout);

const int N = 2e5 + 5;

void solve();
void cf()
{
    int t; cin >> t; while(t--) solve();
}
int32_t main()
{
    IOS;
    cf();
    ///solve();
}

void solve()
{
    int a,b;
    cin >> a >> b;
    int cnt = 0;
    if(a==0 || b==0)
        cnt = 0;
    else{
        int sum = a + b;
        sum /= 3;
        cnt = min(sum,min(a,b));
    }
    cout << cnt << endl;
}

