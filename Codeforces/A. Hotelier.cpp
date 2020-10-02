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
    string p = "0000000000";
    for(int i=0;i<n;i++){
        char c = s[i];
        if(c=='L'){
            for(int i=0;i<10;i++){
                if(p[i]=='0'){
                    p[i] = '1';
                    break;
                }
            }
        }
        else if(c=='R'){
            for(int i=9;i>=0;i--){
                if(p[i]=='0'){
                    p[i] = '1';
                    break;
                }
            }
        }
        else{
            int x = c - '0';
            p[x]='0';
        }
        //cout << p << endl;
    }
    cout << p << endl;
    return 0;
}
