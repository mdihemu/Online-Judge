/*
Author: DarkMotion
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll k,n,w;
    cin >> k >> n >> w;
    w *= (w+1);
    w/=2;
    w*=k;
    w-=n;
    if(w<0)
        w = 0;
    cout << w << endl;
}
