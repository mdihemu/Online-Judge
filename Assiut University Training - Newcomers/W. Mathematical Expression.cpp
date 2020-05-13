#include<bits\stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    char s,q;

    ///input
    cin >> a >> s >> b >> q >> c;

    if(s == '+'){
        if( c == a+b)
            cout << "Yes\n";
        else
            cout << a+b << endl;
    }
    else if(s == '-'){
        if( c == a-b)
            cout << "Yes\n";
        else
            cout << a-b << endl;
    }
    else{
        if( c == a*b)
            cout << "Yes\n";
        else
            cout << a*b << endl;
    }

    return 0;
}

