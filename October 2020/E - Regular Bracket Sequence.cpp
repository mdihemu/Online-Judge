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
    int n,a,b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    int f=0, e=0;
    for(int i=0;i<n;i++){
        if(s[i] == '(')
            f++;
        else
            e++;
    }

    if(f==n || e==n){
        cout << n*a << endl;
        return;
    }
    int m = n;
    for(int i=0;i<m;){
        if(s[i] == '(' && s[i+1] == ')'){
            s.erase(i,2);
            m--;
            if(i>0)
                i--;
        }
        else i++;
    }
    n = s.size();
    f=0,e=0;
    for(int i=0;i<n;i++){
        if(s[i] == '(')
            f++;
        else
            e++;
    }
    if(f==n || e==n){
        cout << n*a << endl;
        return;
    }
    if(f==e){
        cout << min(n*a , f*b) << endl;
        return;
    }
    int mn = abs(f-e);
    int cnt = mn*a;
    cnt += min(f,e) * b;
    cnt = min(cnt,n*a);
    cout << cnt << endl;
}
