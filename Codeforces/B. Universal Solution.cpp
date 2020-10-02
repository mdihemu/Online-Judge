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
    string a;
    cin >> a;

    int r=0,s=0,p=0;

    for(char c : a){
        if(c=='R')
            r++;
        else if(c=='S')
            s++;
        else
            p++;
    }

    char sol = 'X';

    if(r>=s && r>=p)
        sol = 'P';
    else if(s>=r && s>=p)
        sol = 'R';
    else if(p>=s && p>=r)
        sol = 'S';
    else
        assert(false);

    a = string(a.size(),sol);

    cout << a << endl;
}
