#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define pb push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define IN freopen("input.txt","r",stdin);
#define OUT freopen("output.txt","w",stdout);

const int N = 2e5 + 5;

void solve();
int32_t main()
{
    IOS;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int one=0,zero=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0')
            zero++;
        else
            one++;
    }
    int cnt = min(one,zero);
    if(cnt%2==1)
        cout << "DA\n";
    else
        cout << "NET\n";
}
