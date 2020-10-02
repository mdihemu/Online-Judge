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
    int a[n];
    int one=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i] == 1)
            one++;
    }
    int zero = n-one;
    if(zero>=n/2){
        cout << zero << endl;
        for(int i=0;i<zero;i++)
            cout << "0 ";
        cout << endl;
    }
    else{
        one -= one%2;
        cout << one << endl;
        for(int i=0;i<one;i++)
            cout << "1 ";
        cout << endl;
    }
}
