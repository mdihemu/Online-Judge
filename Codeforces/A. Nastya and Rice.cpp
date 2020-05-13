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
        ll n,a,b,c,d;
        cin >> n >> a >> b >> c >> d;

        ll p,q,r,s;

        p = a-b;
        q = a+b;

        p = p * n;
        q = q * n;

        r = c+d;
        s = c-d;

        if(p<=r && q>=s)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}
