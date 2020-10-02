#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int a,b,c,d,e,f;
    cin >> a >> b >> c >> d >> e >> f ;
    int cnt = 0;

    if(e>f){
        int x = min(a,d);
        cnt = x*e;
        d-=x;
        x = min(b,min(c,d));
        cnt += x*f;
    }
    else{
        int x = min(b,min(c,d));
        cnt = x*f;
        d-=x;
        x = min(a,d);
        cnt += x*e;
    }
    cout << cnt << endl;
}
