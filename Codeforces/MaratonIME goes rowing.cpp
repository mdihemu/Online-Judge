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
    int cnta=0,cntb=0;
    for(int i=0;i<n;i++){
        if(s[i]=='A')
            cnta++;
        else
            cnta--;
        if(cnta<0)
            break;
    }
    if(cnta==0)
        cout << "Sim\n";
    else
        cout << "Nao\n";
    return 0;
}
