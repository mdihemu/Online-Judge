#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int n,m;
    cin >> n >> m;
    int od=0,odd=0,ev=0,even=0;


    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x%2==1)
            od++;
        else
            ev++;
    }
    for(int i=0;i<m;i++){
        int x;
        cin >> x;
        if(x%2==1)
            odd++;
        else
            even++;
    }

    int cnt = min(od,even) + min(ev,odd);

    cout << cnt << endl;
}
