#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'
#define pb push_back
#define inf (ll) (1e9 + 10)

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        ll n = s.size();
        ll one = 0,two = 0, three = 0;
        ll le = 0;
        ll cnt = inf;
        for(int i=0;i<n;i++){
            if(s[i] == '1')
                one++;
            else if(s[i] == '2')
                two++;
            else if(s[i] == '3')
                three++;
            while(one && two && three && ( (one>1 && s[le] == '1') ||
                  (two>1 && s[le] == '2') || (three>1 && s[le] == '3'))){
                    if(s[le] == '1')
                        one--;
                    else if(s[le] == '2')
                        two--;
                    else if(s[le] == '3')
                        three--;
                    le++;
            }
            if(one && two && three)
                cnt = min(cnt, i-le+1);
        }
        if(cnt == inf)
            cnt = 0;
        cout << cnt << endl;
    }
}
