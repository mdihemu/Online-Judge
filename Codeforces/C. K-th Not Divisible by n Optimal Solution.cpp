/*
Author: DarkMotion
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M = 100001;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        ll n,k;
        cin >> n >> k;
        ll cnt = (k-1) / (n-1);
        cout << k + cnt << endl;
    }
}
