#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int _ = 1;
    cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
        cin >> a[i];
    int mx = *max_element(a.begin(), a.end());
    int cnt = -1;
    for(int i=0;i<n;i++){
        if(a[i] == mx && a[i+1] != mx && i<n-1){
            cnt = i+1;
            break;
        }
        else if(a[i] == mx && a[i-1] != mx && i>0){
            cnt = i+1;
            break;
        }
        else
            continue;
    }

    cout << cnt << endl;
}
