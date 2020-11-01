#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    int n,m;
    while(cin >> n >> m)
        cout << (n-1) + n*(m-1) << endl;
    return 0;
}
