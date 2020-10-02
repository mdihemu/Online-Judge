#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS;
    int n,d;
    cin >> n >> d;
    int a[101];
    for(int i=0;i<n;i++)
        cin >> a[i];

    sort(a,a+n);

    d = d+d;
    int cnt = 0;
    for(int i=1;i<n;i++){
        if(a[i]-a[i-1] == d)
            cnt++;
        else if(a[i]-a[i-1] > d)
            cnt += 2;
    }
    cout << cnt+2 << endl;
    return 0;
}
