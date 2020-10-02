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
    vector<int>a(n);
    for(int i=0;i<n;i++)
        cin >> a[i];
    int temp = 0,p=0;
    for(int i=0;i<n;i++){
        int mx=0;
        for(int j=0;j<n;j++){
            if(a[j] && __gcd(a[j],temp)>mx){
                mx = __gcd(a[j],temp);
                p = j;
            }
        }
        cout << a[p] << " ";
        temp = __gcd(a[p],temp);
        a[p] = 0;
    }
    cout << endl;
}
