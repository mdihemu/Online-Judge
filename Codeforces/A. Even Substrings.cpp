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
    string s;
    cin >> s;
    int cnt=0;
    for(int i=0;i<n;i++){
        int x = (int)s[i];
        if(x%2==0)
            cnt += i+1;
    }
    cout << cnt << endl;
}
