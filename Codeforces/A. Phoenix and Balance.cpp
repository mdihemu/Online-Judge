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
        ll n;
        cin >> n;


        if(n==2)
            cout << 2 << endl;
        else{
            ll p = n/2;
            ll high = 0, low= pow(2,n);
            for(ll i = 1;i<p;i++)
                low += pow(2,i);
            for(ll i=p;i<n;i++)
                high += pow(2,i);
            cout << low - high <<  endl;
        }
    }
}

