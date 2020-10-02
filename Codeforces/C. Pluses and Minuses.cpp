#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define pb push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define IN freopen("input.txt","r",stdin);
#define OUT freopen("output.txt","w",stdout);

const int N = 2e6;

void solve();
int32_t main()
{
    IOS;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    int cur=0,res=n;
    for(int i=0;i<n;i++){
        if(s[i]=='+')
            cur++;
        else{
            if(cur>0)
                cur--;
            else
                res += i+1;
        }

    }
    cout << res << endl;
}

