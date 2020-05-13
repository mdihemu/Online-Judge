#include<bits\stdc++.h>
using namespace std;

int main()
{
    long long day,year,month;

    ///input
    cin >> day;

    year = day / 365;
    day = day - year * 365;

    month = day / 30;
    day = day - month * 30;

    cout << year << " years\n";
    cout << month << " months\n";
    cout << day << " days\n";

    return 0;
}
