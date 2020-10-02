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
    string a,b,c;
    cin >> a >> b >> c;
    for(int i=0;i<a.size();i++){
        if(c[i]!=a[i] && c[i]!=b[i]){
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

