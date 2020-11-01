#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

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
    multiset<int>a,b;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        a.insert(x);
    }
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(a.find(x)!=a.end())
            a.erase(a.find(x));
        else
            b.insert(x);
    }

    int x = *a.begin();
    int y = *b.begin();
    int m = abs(x-y);

    if((a.empty()) || (a.size() == 1 && m<=k))
        cout << "YES\n";
    else
        cout << "NO\n";
}
