#include<bits\stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c,x,y;

    //input
    cin >> a >> b >> c;

    x = max( max(a,b),c);
    y = min( min(a,b),c);

    ///output
    cout << y << " " << x << endl;

    return 0;
}
