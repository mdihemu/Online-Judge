#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS;
    int a,b,m,n;
    cin >> a >> m >> b >> n;
    bool ok = false;
    for(int i=0;i<10000;i++){
        a+=m;
        b+=n;
        if(a==b){
            ok = true;
            break;
        }
    }
    if(ok)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}
