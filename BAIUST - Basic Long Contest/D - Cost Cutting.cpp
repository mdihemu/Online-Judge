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
        ll x,y,z;
        cin >> x >> y >> z;

        if(x>y && x>z){
            cout << "Case " << k <<": " << max(y,z) << endl;
            k++;
        }
        else if(y>x && y>z){
            cout << "Case " << k <<": " << max(x,z) << endl;
            k++;
        }
        else{
            cout << "Case " << k <<": " << max(y,x) << endl;
            k++;
        }
    }
    return 0;
}

