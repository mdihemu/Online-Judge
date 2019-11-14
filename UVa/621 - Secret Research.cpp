#include<bits/stdc++.h>
using namespace std;

int main()
{
    int nooftestcases;
    cin >> nooftestcases;

    int number;
    for(int i=0 ; i<nooftestcases ; i++){
        cin >> number;

        if(number == 1 || number == 4 || number == 78)
            cout << "+" << endl;
        else if(number == 135 || number == 435 || number == 7835)
            cout << "-" << endl;
        else if(number == 914 || number == 944 || number == 9784)
            cout << "*" << endl;
        else if(number == 1901 || number == 1904 || number == 19078)
            cout << "?" << endl;
    }

    return 0;
}
