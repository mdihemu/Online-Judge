/*
Author: DarkMotion
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    while((cin >> n),n>=0){
        ll cnt =  ((n*(n+1)) / 2 )+ 1;

        cout << cnt << endl;
    }

    return 0;
}

