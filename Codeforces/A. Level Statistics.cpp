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
        int n;
        cin >> n;
        int p=0,q=0,cnt=0;
        while(n--){
            int x,y;
            cin >> x >> y;

            if( x < p || y < q || x-p < y-q)
                cnt++;

            p = x;
            q = y;
        }
        if(cnt ==0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}

