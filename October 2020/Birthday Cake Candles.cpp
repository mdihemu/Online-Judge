#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS;
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    int mx = *max_element(a,a+n);
    int cnt=0;
    for(int i=0;i<n;i++)
        if(a[i] == mx)
            cnt++;
    cout << cnt << endl;
    return 0;
}
