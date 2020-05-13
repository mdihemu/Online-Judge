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

    ll t;
    cin >> t;
    while(t--){
        ll n,k,cnt = 0;
        cin >> n >> k;

        if(n%2==0)
            n += 2*k;
        else{
            for(ll i=3;i<=n;i++){
                if(n%i==0){
                    cnt  = i;
                    break;
                }
            }
            n +=cnt;
            k--;
            n +=2*k;
        }
        cout << n << "\n";
    }
}
