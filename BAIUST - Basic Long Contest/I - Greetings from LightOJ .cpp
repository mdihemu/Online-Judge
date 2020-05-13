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
    ll cnt = 1;
    while(t--){
        ll a,b;
        cin >> a >> b;
        a = a + b;
        cout << "Case " << cnt <<": " << a << endl;
        cnt++;
    }
}

