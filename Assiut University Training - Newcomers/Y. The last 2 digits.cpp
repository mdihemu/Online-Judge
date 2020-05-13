#include<bits\stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c,d,ans = 0;

    ///input
    cin >> a >> b >>c >> d;

    a = a%100;
    b = b%100;
    c = c%100;
    d = d%100;

    ans = a*b*c*d;

    ans = ans % 100;

    ///output
    if(ans < 10)
        cout << "0"<< ans << endl;
    else
        cout << ans << endl;

    return 0;
}
