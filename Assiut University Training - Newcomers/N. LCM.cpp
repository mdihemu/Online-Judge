#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a,b,sum=0,gcd,lcm;

    cin >> a >> b;
    if(a<0)
        a = (-1)*a;
    if(b<0)
        b = (-1)*b;
    //cout << a << " "<<b << endl;
    gcd = __gcd(a,b);

    lcm = a*b;
    lcm = lcm / gcd;

    cout << lcm << endl;

    return 0;
}

