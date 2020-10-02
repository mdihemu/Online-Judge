#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

unsigned int rebit(unsigned int n)
{
    unsigned int rev = 0;
    while(n>0){
        rev <<= 1;
        if(n&1 == 1)
            rev ^= 1;
        n>>=1;
    }
    return rev;
}
void fun(unsigned int n)
{
    unsigned int rev = rebit(n);
    if(n == rev){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}
void solve();
int32_t main()
{
    IOS;
    int _=1;
    ///cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    unsigned int n;
    cin >> n;
    if(n%2==0){
        cout << "NO\n";
    }
    else
        fun(n);
}
