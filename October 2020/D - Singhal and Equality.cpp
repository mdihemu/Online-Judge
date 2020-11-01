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
    int n = s.size();
    int a[26] = {0};
    for(int i=0;i<n;i++)
        a[s[i] - 'a']++;

    sort(a,a+26, greater<int>());

    int cnt = n;
    for(int i=1;i<=26;i++){
        if(n%i==0){
            int x = n/i;
            int y = 0;
            for(int j=0;j<i;j++){
                y += min(a[j],x);
            }
            cnt = min(cnt,n-y);
        }
    }
    cout << cnt << endl;
}


//int mn = a[0];
//    for(int i=1;i<26;i++)
//        mn = max(mn,a[i]);
//    int cnt = 0, cnt2 = 0, cntt = 0;
//    for(int i=0;i<26;i++){
//        if(a[i]>0 && a[i]!=mn){
//            cnt++;
//            cntt = max(cntt, abs(mn-a[i]));
//        }
//        if(a[i] == mn)
//            cnt2++;
//    }
//    if(cntt > 1){
//        cout << cntt << endl;
//        return;
//    }
//    cnt++;
//    cout << cnt/2 << endl;
