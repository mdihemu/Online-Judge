/*
Author: DarkMotion
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n;
    cin >> n;

    ll x = 0;
    for(int i=0;i<n;i++){
        ll a;
        cin >> a;
        a+= x;
        x = max(x,a);
        cout << a << " ";
    }
    cout << endl;
}

