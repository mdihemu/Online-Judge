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
bool isprime(int n)
{
    if(n<=1)return false;   if(n==2)return true;    if(n>2 && n%2==0)return false;
    int div = sqrt(n);  for(int i=3;i<=div;i+=2)if(n%i==0)return false;
    return true;
}

int mindivisor(int n)
{
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return i;
        }
    }
    return n;
}

void solve()
{
    int n;
    cin >> n;
    int cnt=0,cnt2=0;

    int x = mindivisor(n);
    cnt = n/x;
    cnt2 = n-cnt;

    cout << cnt << " " << cnt2 << endl;
}
