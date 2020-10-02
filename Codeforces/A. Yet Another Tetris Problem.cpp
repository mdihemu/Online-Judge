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
int32_t main()
{
    IOS;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    bool even=false,odd=false;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x%2==0)
            even = true;
        else
            odd = true;
    }
    if(even == false || odd == false)
        cout << "YES\n";
    else
        cout << "NO\n";
}
