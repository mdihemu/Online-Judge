#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll n,m;
    cin >> n >> m;
    string a[n],b[m];
    ll i;
    for(i=0;i<n;i++)
        cin >> a[i];
    for(i=0;i<m;i++)
        cin >> b[i];
    ll x;
    cin >> x;
    while(x--){
        ll y;
        cin >> y;
        y--;
        cout << a[y%n] + b[y%m] << endl;
    }
}
