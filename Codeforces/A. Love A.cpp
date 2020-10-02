#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    string s;
    cin >> s;
    int n = s.size();
    int x = n/2 + 1;
    int a = 0;

    for(int i=0;i<n;i++){
        if(s[i]=='a')
            a++;
    }

    int cnt=0;
    if(a>=x)
        cnt = n;
    else
        cnt = 2*a-1;

    cout << cnt << endl;
}
