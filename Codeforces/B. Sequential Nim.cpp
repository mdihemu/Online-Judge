#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int _=1; cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    vector<int>a(n);
    for(int &e:a){
        cin >> e;
    }

    int cnt = 0;
    for(int i=0;i<n;i++){
        cnt++;
        if(a[i]>1)
            break;
    }

    if(cnt%2==0)
        cout << "Second\n";
    else
        cout << "First\n";
}
