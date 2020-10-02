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

    ll t;
    cin >> t;
    while(t--){
        ll n,m,cnt=0;
        cin >> n >> m;
        if(n==1)
            cnt = 0;
        else if(n==2)
            cnt = m;
        else
            cnt = 2*m;
        cout << cnt << endl;
    }
}

