#include<bits\stdc++.h>
using namespace std;

int main()
{
    long long int a,b,c,d;

    cin >> a >> b >> c >> d;

    if( c>b || a>d){
        cout << "-1\n";
    }
    else{
        if( a>c )
            c=a;
        if(d<b)
            b=d;
        cout << c << " " << b << endl;
    }

    return 0;
}
