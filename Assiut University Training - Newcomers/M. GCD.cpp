#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main()
{
    ll a,b,sum=0,gcd,lcm;

    cin >> a >> b;
    gcd = __gcd(a,b);

    lcm = a*b;
    lcm = lcm / gcd;

    cout << gcd << " " << lcm << endl;

    return 0;
}
