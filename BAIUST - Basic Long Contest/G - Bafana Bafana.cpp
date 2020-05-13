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
    ll i=1;
    while(t--){
        ll n,k,p;
        cin >> n >> k >> p;
        k = k + p;
        if(k%n == 0)
            k = n;
        else
            k = k%n;
        cout << "Case " << i <<": " << k << endl;
        i++;
    }
}

