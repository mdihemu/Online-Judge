#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    int n;
    cin >> n;

    int cnt1 = 0,cnt2= 0,cnt3=0;
    for(int i=0;i<n;i++){
        int e;
        cin >> e;
        if(e==1)
            cnt1++;
        else if(e==2)
            cnt2++;
        else
            cnt3++;
    }
    int cnt = cnt1 + cnt2 + cnt3 - max(cnt1,max(cnt2,cnt3));
    cout << cnt << endl;
}
