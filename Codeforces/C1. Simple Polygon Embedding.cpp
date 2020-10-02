#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define pb push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define IN freopen("input.txt","r",stdin);
#define OUT freopen("output.txt","w",stdout);

const int N = 2e5 + 5;
const double pi = 3.1415926535897;

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
    long double n;
    cin >> n;
    n = 2 * n;
    n = pi / n;
    n = tan(n);
    n = 1.0 / n;
    cout << fixed << setprecision(9);
    cout << n << endl;
}
