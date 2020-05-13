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
    while(t--){
        int n;
        cin >> n;

        if(n>10)
            cout << n-10 << " " << 10 << endl;
        else
            cout << 0 << " " << n << endl;
    }
}

