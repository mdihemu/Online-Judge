#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    cout << fixed << setprecision(10);
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
    bool ok = false, okk = false;
    for(int i=0;i<n;i++){
        if(s[i] == '>')
            ok = true;
        else if(s[i] == '<')
            okk = true;
    }
    if(ok && okk){
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(s[i] == '-' || s[i+1] == '-'){
                cnt++;
            }
        }
        if(s[0] == '-' && s[n-1] != '-')
            cnt++;
        cout << cnt << endl;
    }
    else
        cout << n << endl;
}
