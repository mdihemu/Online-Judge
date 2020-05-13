/*
Author: DarkMotion
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M = 100001;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("input.txt" , "r", stdin);

    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;

        ll cnt = n-1;
        ll x = k/cnt;
        ll y = k%cnt;
        x = x*n;

        if(y==0)
            cout << x-1 << endl;
        else
            cout << x+y << endl;
    }
}
