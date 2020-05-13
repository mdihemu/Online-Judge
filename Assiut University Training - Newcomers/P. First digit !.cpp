#include<bits\stdc++.h>
using namespace std;

int main()
{
    int n;

    ///input
    cin >> n;

    n = n/1000;

    if(n%2 == 0)
        cout << "EVEN\n";
    else
        cout << "ODD\n";
}
