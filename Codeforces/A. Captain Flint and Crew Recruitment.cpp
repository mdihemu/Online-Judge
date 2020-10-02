#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int _=1; cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    if(n<=30)
        cout << "NO\n";
    else{
        cout << "YES\n";
        int a = 6,b=10,c=14;
        int d = n-30;
        if(a==d || b==d || c==d ){
            c++;
            d--;
        }
        cout << a << " " << b << " " << c << " " << d << endl;
    }
}
