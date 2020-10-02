#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define pb push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define IN freopen("input.txt","r",stdin);
#define OUT freopen("output.txt","w",stdout);

const int N = 50000;

bool checkprime(int n)
{
    for(int i=2;i<min(N,n);i++)
        if(n%i==0)
            return 0;
    return 1;
}

void solve();
int32_t main()
{
    IOS;
    int t; cin >> t;
    while(t--) solve();
}

void solve()
{
    int n;
    cin >> n;
    bool lose = (n==1);
    if(n>2 && n%2==0){
        if((n & (n-1)) == 0)
            lose = 1;
        else if(n%4!=0 && checkprime(n/2))
            lose = 1;
    }
    if(lose)
        cout << "FastestFinger\n";
    else
        cout << "Ashishgup\n";
}
