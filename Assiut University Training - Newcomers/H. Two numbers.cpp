#include<bits\stdc++.h>
using namespace std;

int main()
{
    double a,b;

    //input
    cin >> a >> b;

    double ans = a/b;

    //output
    cout << "floor " << a << " / " << b << " = " << floor(ans) <<endl;
    cout << "ceil " << a << " / " << b << " = " << ceil(ans) << endl;
    cout << "round " << a << " / " << b << " = " << round(ans) << endl;

    return 0;
}
