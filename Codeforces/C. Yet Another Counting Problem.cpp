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
        int a,b,x;
        cin >> a >> b >> x;

        while(x--){
            ll cnt = 0;
            ll m,n;
            cin >> m >> n;
            while(m!=n){
                if(((m%a)%b) != ((m%b)%a))
                    cnt++;
                m++;
            }
            if(cnt>0)
                cnt++;
            if(x==0)
                cout << cnt;
            else
                cout << cnt << " ";
        }
        cout << endl;
    }
}

