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
    int a,b;
    string s;
    cin >> a >> b;
    cin >> s;

    int c = count(s.begin(),s.end(),'1');
    if(!c){
        cout << 0 << endl;
        return;
    }

    while(s.back() == '0')
        s.pop_back();
    reverse(s.begin(), s.end());
    while(s.back() == '0')
        s.pop_back();
    reverse(s.begin(), s.end());

    int n = s.size();
    vector<int>v;
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(s[i] == '0')
            cnt++;
        else if(cnt){
            v.push_back(cnt);
            cnt = 0;
        }
    }

    int m = v.size() + 1;
    int mn = m*a;
    sort(v.begin(),v.end());

    cnt = 0;
    for(auto i : v){
        cnt += i;
        m--;
        mn = min(mn,(cnt*b) + (m*a));
    }
    cout << mn << endl;
}
