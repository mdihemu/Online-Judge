#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,cnt=0;
    cin >> n;
    if(n<2)
        cout << "NO\n";

    else{
        for(ll i=2;i<=sqrt(n);i++)
            if(n%i==0)
                cnt++;

        if(cnt == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
