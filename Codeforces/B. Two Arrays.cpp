#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int N = 1e5+10;

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
    int n,t;
    cin >> n >> t;
    int a[N],b[N]={0};
    for(int i=0;i<n;i++)
        cin >> a[i];
    int cnt=0;
    for(int i=0;i<n;i++){
        if(2*a[i]<t){
            b[i] = 1;
        }
        else if(2*a[i]==t){
            cnt++;
        }
    }
    cnt = cnt/2;
    for(int i=0;i<n;i++){
        if(2*a[i]==t && cnt ){
            b[i] = 1;
            cnt--;
        }
    }
    for(int i=0;i<n;i++)
        cout << b[i] << " ";

    cout << endl;
}
