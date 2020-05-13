#include<bits/stdc++.h>
using namespace std;

int main()
{
    int year;
    cin >> year;

    while(year > 0){
        year++;
        int a,b,c,d,y;

        y = year;

        a = y / 1000;
        y = y%1000;
        b = y/100;
        y = y%100;
        c = y/10;
        d = y%10;

        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            cout << year << endl;
            break;
        }
    }
    return 0;
}
