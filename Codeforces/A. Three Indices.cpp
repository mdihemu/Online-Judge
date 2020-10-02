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

bool isprime(int n)
{
    if(n<=1)return false;   if(n==2)return true;   if(n>2 && n%2==0)return false;
    int div = sqrt(n);    for(int i=3;i<=div;i+=2)if(n%i==0)return false;
    return true;
}

void solve();
int32_t main()
{
    IOS;
    int t=1; cin >> t;
    while(t--) solve();
    return 0;
}

void solve()
{
    int n,cnt=-1;
    cin >> n;
    int a[n+1];
    for(int i=1;i<=n;i++){
        cin >> a[i];
    }
    for(int i=2;i<n;i++){
        if(a[i-1]<a[i] && a[i]>a[i+1])
            cnt=i;
    }

    if(cnt==-1)
        cout << "NO\n";
    else{
        cout << "YES\n";
        cout << cnt-1 << " " << cnt << " " << cnt+1 << endl;
    }
}
