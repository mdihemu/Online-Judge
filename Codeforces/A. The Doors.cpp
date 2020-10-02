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
    int a[n],l=0,r=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i]==0)
            l++;
        else
            r++;
    }

    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]==0)
            l--;
        else
            r--;
        if(l==0 || r==0){
            cnt = i+1;
            break;
        }
    }
    cout << cnt << endl;
    return 0;
}
