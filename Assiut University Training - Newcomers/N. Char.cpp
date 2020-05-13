#include<bits\stdc++.h>
using namespace std;

int main()
{
    char ch;

    ///input
    cin >> ch;

    if(ch >= 65 && ch<=90){
        ch = ch + 32;
        cout << ch;
    }
    else{
        ch = ch - 32;
        cout << ch;
    }
}
