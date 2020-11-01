#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

bool sieve(int n, bool prime[])
{
    prime[0] = false;
    prime[1] = false;
    for(int i=2;i<=n;i++)
        prime[i] = true;

    for(int i=2;i<=sqrt(n); i++){
        if(prime[i]){
            for(int j=i*i; j<=n;j+=i)
                prime[j] = false;
        }
    }
}
int32_t main()
{
    int n;
    cin >> n;
    bool prime[n+1];
    sieve(n,prime);

    bool ok = false;
    for(int i=0;i<n;i++){
        if(prime[i] && prime[n-i]){
            cout << i << ' ' << n-i << endl;
            ok = true;
            break;
        }
    }
    if(!ok)
        cout << -1 << endl;
    return 0;
}
