#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int _=1;
    //cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    double n,z=0,p=0,ne=0;
    cin >> n;
    for(int i=0;i<n;i++){
        double x;
        cin >> x;
        if(x==0)
            z++;
        else if(x<0)
            ne++;
        else
            p++;
    }
    cout << setprecision(6) << fixed << p/n << endl << ne/n << endl << z/n << endl;
}
