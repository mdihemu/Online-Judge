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
        ll n;
        cin >> n;
        ll sum = 0,zero =0;
        while(n--){
            ll a;
            cin >> a;
            if(a==0){
                zero++;
                sum ++;
            }
            sum += a;
        }
        if( sum == 0)
            zero++;
        cout << zero << endl;
    }
}

