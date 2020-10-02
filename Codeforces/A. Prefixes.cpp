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
    for(int i=0;i<n;i+=2){
        if(s[i]==s[i+1]){
            cnt++;
            if(s[i]=='a')
                s[i] = 'b';
            else
                s[i]='a';
        }
    }
    cout << cnt << endl;
    cout << s << endl;
}
