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
    string s,str="";
    cin >> s;
    int cnt=1;
    for(int i=0;i<n;i++){
        str += s[i];
        i+=cnt;
        cnt++;
    }
    cout << str << endl;
}
