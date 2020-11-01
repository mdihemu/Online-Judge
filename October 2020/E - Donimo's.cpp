#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main()
{
    int n;
    cin >> n;
    n = n;
    int a[2*n],b[2*n];
    int sum = 0;
    for(int i=0;i<2*n;i++){
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a,a+n+n);
    sort(b,b+n+n, greater<int>());

    int ans[n];
    for(int i=0;i<n;i++)
        ans[i] = a[i] + b[i];
    sort(ans,ans+n);
    cout << ans[n-1] - ans[0] << endl;
    return 0;
}
