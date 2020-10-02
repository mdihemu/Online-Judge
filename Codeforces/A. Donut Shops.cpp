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
    int a,b,c;
    cin >> a >> b >> c;
    int cnt1=0,cnt2=0;
    if(a>=c){
        cnt1=-1;
        cnt2=b;
    }
    else{
        cnt1=1;
        if(a*b>c){
            cnt2=b;
        }
        else
            cnt2=-1;
    }
    cout << cnt1 << " " << cnt2 << endl;
}
