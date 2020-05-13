/*
Author: DarkMotion
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mx 100001;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int m,n,o,p;
        m = max(a,b);
        n = min(a,b);
        o = max(c,d);
        p = min(c,d);
        n+=p;
        //cout << m << n << o << p << endl;
        if( (m==o) && (n==o))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

}

