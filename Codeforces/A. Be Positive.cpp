#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int n;
    cin >> n;
    int p=0,ne=0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x>0)
            p++;
        else if(x<0)
            ne++;
    }

    double m = n*1.0;
    int a = ceil(m/2.0);
    //cout << a << endl;
    int cnt=0;
    if(p>=a)
        cnt = 1;
    else if(ne>=a)
        cnt=-1;
    else
        cnt=0;
    cout << cnt << endl;
    return 0;
}
