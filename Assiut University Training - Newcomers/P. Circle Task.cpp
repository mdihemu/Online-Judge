#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll x,y,r,n;
    cin >> x >> y >> r >> n;
    while(n--){
        ll a,b;
        cin >> a >> b;
        ll distance = 0;
        distance = (a-x) * (a-x);
        distance += (b-y) * (b-y);
        distance = sqrt(distance);
        if(distance <= r)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
