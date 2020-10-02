#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define pb push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define IN freopen("input.txt","r",stdin);
#define OUT freopen("output.txt","w",stdout);

const int N = 205;
bool a[N];

void solve();
int32_t main()
{
    IOS;
    int t; cin >> t;
    while(t--) solve();
}

void solve()
{
    int n,x;
    cin >> n >> x;
    for(int i=1;i<=n+x;i++)
        a[i] = false;
    for(int i=1;i<=n;i++){
        int m;
        cin >> m;
        a[m] = true;
    }
    for(int i = n+x;i>0;i--){
        int cnt=0;
        for(int j=1;j<=i;j++)
            if(!a[j])
                cnt++;
        if(cnt<=x){
            cout << i << endl;
            return;
        }
    }
}
