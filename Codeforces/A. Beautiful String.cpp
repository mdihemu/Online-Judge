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

char check(char a,char b)
{
    if(a!='a' && b!='a')
        return 'a';
    else if(a!='b' && b!='b')
        return 'b';
    else
        return 'c';
}
void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    bool ok = true;
    for(int i=0;i<n;i++){
        if(s[i] == s[i+1] && s[i]!='?')
            ok = false;
    }
    for(int i=0;i<n;i++){
        if(s[i]=='?'){
            if(i==0)
                s[i] = check(s[1],s[1]);
            else if(i==n-1)
                s[i] = check(s[n-2],s[n-2]);
            else
                s[i] = check(s[i-1],s[i+1]);
        }
    }
    if(ok){
        cout << s << endl;
    }
    else
        cout << "-1" << endl;
}
