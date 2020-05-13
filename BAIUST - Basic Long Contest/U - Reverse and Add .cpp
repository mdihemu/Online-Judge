/*
Author: DarkMotion
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll reversee(ll n)
{
    ll rev = 0;
    while(n!=0){
        rev = rev * 10 + n % 10;
        n/=10;
    }
    return rev;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll number,cnt=0,rev=0;
        cin >> number;

        rev = reversee(number);

        while(rev != number){
            number += rev;
            rev = reversee(number);
            cnt++;
        }
        cout << cnt << " " << number << endl;
    }
}
