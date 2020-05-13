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
        ll a,b,c,sum=0;
        cin >> a >> b >> c;

        ll array[3];
        array[0] = a;
        array[1] = b;
        array[2] = c;
        sort(array,array+3);

        a = array[2];
        b = array[1];
        c = array[0];

        if(a>0){
            sum++;
            a--;
        }
        if(b>0){
            sum++;
            b--;
        }
        if(c>0){
            sum++;
            c--;
        }
        if(a>0 && b>0){
            sum++;
            a--;
            b--;
        }
        if(a>0 && c>0){
            sum++;
            a--;
            c--;
        }
        if(b>0 && c>0){
            sum++;
            b--;
            c--;
        }
        if(a>0 && b>0 && c>0)
            sum++;

        cout << sum << endl;
    }
}
