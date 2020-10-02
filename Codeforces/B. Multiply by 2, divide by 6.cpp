#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define pb push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define IN freopen("input.txt","r",stdin);
#define OUT freopen("output.txt","w",stdout);

const int N = 2e5 + 5;
const double pi = 3.141592653589793238;

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
    int cnt=0;
    int m=n;
    while(1){
        if(n==1)
            break;
        if(n%6==0)
            n/=6;
        else
            n *=2;
        cnt++;

        if(cnt>=m||n<=0){
            cnt=-1;
            break;
        }
    }
    cout << cnt << endl;
}
