#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
const int MAXN = 1e9+5;

void solve();
int32_t main()
{
    IOS;
    int _=1;
    //cin >> _;
    while(_--) solve();
    return 0;
}

/*
void solve()
{
    int n;
    cin >> n;
    set<int>s{0};
    int cnt=0,sum=0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        int temp = sum + x;
        if(s.count(temp)){
            cnt++;
            s = {sum};
        }
        s.insert(sum = temp);
    }
    cout << cnt << endl;
}
*/

///2nd Solution
void solve()
{
    int n;
    cin >> n;
    int cnt=0,sum=0;
    map<int, int> mp;
    mp[sum] = 1;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        sum += x;
        if(mp.find(sum) != mp.end()){
            cnt++;
            mp.clear();
            sum = 0;
            mp[sum] = 1;
            sum += x;
            mp[sum] = 1;
        }
        mp[sum] = 1;
    }
    cout << cnt << endl;
}
