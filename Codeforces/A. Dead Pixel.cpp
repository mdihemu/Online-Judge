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
        ll a,b,x,y;
        cin >> a >> b >> x >> y;
        ll max1 = max( x, (a-x-1));
        max1 *= b;
        ll max2 = max( y , (b-y-1));
        max2 *= a;
        cout << max(max1,max2) << endl;
    }
}

