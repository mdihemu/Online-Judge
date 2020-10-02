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
    int zero=0,one=0;
    for(int i=0;i<n;i++){
        if(s[i]=='0')
            zero++;
        else
            one++;
    }
    if(zero==one){
        cout << "2\n";
        cout << s[0] << " ";
        for(int i=1;i<n;i++)
            cout << s[i];
        cout << endl;
    }
    else{
        cout << "1\n";
        cout << s << endl;
    }
    return 0;
}
