#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main()
{
    int a,b,c;

    cin >> a >> b >> c;

    if( a>=b && a>=c){
        if(b+c > a)
            cout << "Valid\n";
        else
            cout << "Invalid\n";
    }
    else if( b>=a && b>=c){
        if(a+c > b)
            cout << "Valid\n";
        else
            cout << "Invalid\n";
    }
    else{
        if(a+b > c)
            cout << "Valid\n";
        else
            cout << "Invalid\n";
    }

    return 0;
}
