#include<bits\stdc++.h>
using namespace std;

int main()
{
    char cha;

    ///input
    cin >> cha;

    ///condition
    if(cha >= 48 && cha <= 57)
        cout << "IS DIGIT\n";
    else if(cha >= 65 && cha <= 90){
        cout << "ALPHA\nIS CAPITAL\n";
    }
    else if(cha >= 97 && cha <= 122)
        cout << "ALPHA\nIS SMALL\n";
}
