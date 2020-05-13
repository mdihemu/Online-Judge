/*
Author: DarkMotion
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll x,y,a,b;
        cin >> x >> y >> a >> b;

        y = y-x;
        a = a+b;
        if(y%a==0)
            cout << y/a << endl;
        else
            cout << "-1\n";
    }
}

