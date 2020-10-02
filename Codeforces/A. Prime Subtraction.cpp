#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool isprime(int n)
{
    if(n<=1)return false;   if(n==2)return true;   if(n>2 && n%2==0)return false;
    int div = sqrt(n);    for(int i=3;i<=div;i+=2)if(n%i==0)return false;
    return true;
}

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
    int x,y;
    cin >> x >> y;
    int n = abs(x-y);

    if(n>1)
        cout << "YES\n";
    else
        cout << "NO\n";
}
