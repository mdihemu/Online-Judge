#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS;
    int a[5],sum=0;
    for(int i=0;i<5;i++){
        cin >> a[i];
        sum += a[i];
    }
    int mn = *min_element(a,a+5);
    int mx = *max_element(a,a+5);
    cout << sum - mx << " " << sum-mn << endl;
    return 0;
}
