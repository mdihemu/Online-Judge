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
}

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    vector<char>ch;
    for(int i=0;i<n;i++){
        if(i==n-1)
            ch.push_back(s[i]);
        if(i%2==0)
            ch.push_back(s[i]);
    }
    for(int i=0;i<ch.size();i++)
        cout << ch[i];
    cout << endl;
}
