#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int _=1;
    cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int n;
    cin >> n;

    string a;
    cin >> a;
    int even=0,odd=0;
    int cnt = 0;

    for(int i=0;i<n;i++){
        if(i%2==0){
            if(a[i]%2)
                odd++;
        }
        else{
            if(a[i]%2==0)
                even++;
        }
    }
    if(n%2){
        if(odd)
            cnt = 1;
        else
            cnt = 2;
    }
    else{
        if(even)
            cnt = 2;
        else
            cnt = 1;
    }

    cout << cnt << endl;
}
