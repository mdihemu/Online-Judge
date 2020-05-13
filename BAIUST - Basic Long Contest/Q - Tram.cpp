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
    ll cnt=0,mcnt=0;
    while(t--){
        int a,b;
        cin >> a >> b;
        cnt -=a;
        cnt += b;
        if(cnt > mcnt)
            mcnt = cnt;
    }
    cout << mcnt << endl;
}

