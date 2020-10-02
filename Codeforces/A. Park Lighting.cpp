#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'
#define pb push_back
#define s 10010

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        ll n,m;
        cin >> n >> m;
        n = n*m + 1;
        n /= 2;
        cout << n << endl;
    }
}

