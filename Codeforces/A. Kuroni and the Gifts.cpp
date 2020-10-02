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
    int n;
    cin >> n;
    vector<int>a(n),b(n);
    for(int &e : a)
        cin >> e;
    for(int &e : b)
        cin >> e;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    for(int i=0;i<n;i++)
        cout << a[i] << " ";
    cout << endl;
    for(int i=0;i<n;i++)
        cout << b[i] << " ";
    cout << endl;
}
