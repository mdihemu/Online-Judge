#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int _ = 1;
    cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int even = 0, odd = 0;
    for(int i=0;i<n;i++){
        if(s[i] == '0' && s[i+1] == '1')
            even++;
        if(s[i] == '1' && s[i+1] == '0')
            odd++;
    }
    cout << n/2 - max(even, odd) << endl;
}
