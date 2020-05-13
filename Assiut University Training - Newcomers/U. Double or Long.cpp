#include<bits\stdc++.h>
using namespace std;

int main()
{
    double a;

    ///input
    cin >> a;

    ///output
    int b = a*1000;
    if(b%1000 == 0){
        cout << "long long " << int(a) << endl;
    }
    else
        cout << "double " << int(a) << " " << a - int(a) << endl;

    return 0;
}
