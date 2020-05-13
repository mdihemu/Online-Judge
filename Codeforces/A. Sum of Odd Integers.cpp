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
        ll n,k;
        cin >> n >> k;
        if(( n%2==k%2 ) && ( n>=k*k))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

