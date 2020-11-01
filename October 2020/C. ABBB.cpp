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
    string s;
    cin >> s;
    int n = s.size() - 1;
    for(int i=0;i<n;){
        if((s[i] == 'A' && s[i+1] == 'B') || (s[i] == 'B' && s[i+1] == 'B')){
            s.erase(i,2);
            n--;
            if(i>0)
                i--;
        }
        else
            i++;
    }
    cout << s.size() << endl;
}
