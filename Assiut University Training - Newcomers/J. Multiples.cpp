#include<bits\stdc++.h>
using namespace std;

int main()
{
    long long int a,b;

    //input
    cin >> a >> b;

    if( a%b == 0 || b%a == 0 )
        cout << "Multiples\n";
    else
        cout << "No Multiples\n";

    return 0;
}
