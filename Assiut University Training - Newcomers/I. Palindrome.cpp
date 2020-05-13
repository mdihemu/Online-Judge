#include<bits\stdc++.h>
using namespace std;

int main()
{
    long long int n,num,digit,rev=0;

    ///input
    cin >> num;

    ///reverse the string
    n = num;
    do
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    }while(num != 0);

    ///output
    cout << rev << endl;
    if(n == rev)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
