#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define pb push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define IN freopen("input.txt","r",stdin);
#define OUT freopen("output.txt","w",stdout);

const int N = 2e5 + 5;

void solve();
int32_t main()
{
    IOS;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    int cnt = 0;
    int a[n];
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(i%2==0)
            cnt+=a[i];
    }
    vector<int>even;
    for(int i=0;i+1<n;i+=2){
        even.pb(a[i+1]-a[i])
    }
    vector<int>odd;
    for(int i=1;i+1<n;i+=2){
        odd.pb(a[i]-a[i+1])
    }
    cnt += max
}
