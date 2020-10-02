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
    vector<int>a(n);
    for(int &e:a)
        cin >> e;

    sort(a.begin(),a.end());

    int x=0,y=0;
    for(int i=0;i<n;i++){
        if(i<n/2)
            x+=a[i];
        else
            y+=a[i];
    }

    cout << x*x+y*y << endl;
    return 0;
}
