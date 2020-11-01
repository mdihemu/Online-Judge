#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS;
    int s,t;
    cin >> s >> t;
    int a,b;
    cin >> a >> b;
    int n,m;
    cin >> n >> m;
    int cnt=0,cnt2=0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x>0){
            x += a;
            if(x>=s && x<=t)
                cnt++;
        }
    }
    cout << cnt << endl;
    cnt=0;
    for(int i=0;i<m;i++){
        int x;
        cin >> x;
        if(x<0){
            x += b;
            if(x>=s && x<=t)
                cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
