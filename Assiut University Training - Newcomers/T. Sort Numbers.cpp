#include<bits\stdc++.h>
using namespace std;

int main()
{
    long long a,b,c,n[3],p,q,r;

    ///input
    cin >> a >> b >> c;

    ///put them into array
    n[0] = a;
    n[1] = b;
    n[2] = c;

    ///sort them
    sort(n,n+3);

    ///again put them in variable
    p=n[0];
    q=n[1];
    r=n[2];

    ///output
    cout << p << "\n" << q << "\n" << r << endl << endl;
    cout << a << "\n" << b << "\n" << c << endl;

    return 0;
}
