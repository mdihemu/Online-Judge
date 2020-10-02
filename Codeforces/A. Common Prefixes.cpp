#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int _=1; cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    vector<int>a(n);
    int mx=0;
    for(int &e:a){
        cin >> e;
        mx = max(mx,e);
    }
    if(mx ==0)
        mx++;
    char ch = 'a';
    string s = "";
    for(int i=0;i<mx;i++){
        s = s + ch;
    }
    cout << s << endl;
    for(int i=0;i<n;i++){
        int x = a[i];
        for(int i=x;i<mx;i++){
            if(s[i]=='z')
                s[i] = 'a';
            s[i]++;
        }
        cout << s << endl;
    }
}
