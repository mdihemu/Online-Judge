#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'
#define pb push_back
#define s 10010

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t;
    cin >> t;
    while(t--){
        ll a,b,c,d;
        cin >> a >> b >> c >> d;
        ll cnt = 0;
        if(b>=a)
            cnt = b;
        else{
            if(d>=c)
                cnt = -1;

            else{
                ll x,y;
                x = a-b;
                y = c-d;
                cnt = b;
                if(x%y==0){
                    x = x/y;
                }
                else{
                     x = x/y;
                     x++;
                }
                cnt += x * c;
            }
        }
        cout << cnt << endl;
    }
}
