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
    int m;
    cin >> m;
    int b[m];
    for(int i=0;i<m;i++)
        cin >> b[i];
    sort(a,a+n);
    sort(b,b+m);
    int cnt = 0;
    for(int i=0;i<n;i++){
        cnt += abs(a[i] - b[i]);
    }
    cout << cnt << endl;
    return 0;
}
