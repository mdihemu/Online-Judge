/*
Author: DarkMotion
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    ll k = 1;
    while(t--){
        ll a,b;
        cin >> a >> b;

        if(a < b)
            cout << "<" << endl;
        else if(a > b)
            cout << ">" << endl;
        else
            cout << "=" << endl;
    }
    return 0;
}


