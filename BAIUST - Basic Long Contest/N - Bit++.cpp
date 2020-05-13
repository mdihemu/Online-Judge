/*
Author: DarkMotion
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll t,x=0;
    cin >> t;

    string s1("++X");
    string s2("X++");

    while(t--){
        string str;
        cin >>  str;

        if ((s1.compare(str)) == 0)
            x++;
        else if((s2.compare(str)) == 0)
            x++;
        else
            x--;
    }
    cout << x << endl;
}

