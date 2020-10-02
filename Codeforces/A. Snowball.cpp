#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int w,h;
    cin >> w >> h;
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    for(int i=h;i>=0;i--){
        w+=i;
        if(i==b)
            w-=a;
        if(i==d)
            w-=c;
        if(w<0)
            w = 0;
    }
    cout << w << endl;
}
