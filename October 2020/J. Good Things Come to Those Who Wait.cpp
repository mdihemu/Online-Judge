#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        int k;
        cin >> k;
        int a[k];
        for(int i=0;i<k;i++)
            cin >> a[i];
        sort(a,a+k);

        int cnt = a[0] * a[k-1];
        printf("Case %lld: %lld\n",i,cnt);
    }
    return 0;
}
