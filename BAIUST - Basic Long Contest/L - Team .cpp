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
    ll cnt = 0;
    while(t--){
        ll a,b,c;
        cin >> a >> b >> c;
        if((a==1 && b==1) || (a==1 && c==1) || (b==1 && c==1))
            cnt++;
    }
    cout << cnt << endl;
}

