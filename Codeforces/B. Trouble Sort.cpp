#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define pb push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define IN freopen("input.txt","r",stdin);
#define OUT freopen("output.txt","w",stdout);

const int N = 1005;

void solve();
void cf()
{
    int t; cin >> t; while(t--) solve();
}
int32_t main()
{
    IOS;
    cf();
    ///solve();
}

void solve()
{
    int n;
    cin >> n;
    int a[N],b[N];
    int st = 0,b0=0,b1=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(i>0 && a[i] < a[i-1])
            st++;
    }
    for(int i=0;i<n;i++){
        cin >> b[i];
        if(b[i] == 0)
            b0++;
        else
            b1++;
    }
    if(b0 >= 1 && b1 >= 1)
        cout << "Yes\n";
    else if(st==0)
        cout << "Yes\n";
    else
        cout << "No\n";
}
