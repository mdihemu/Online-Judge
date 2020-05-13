/*
Author: DarkMotion
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mx 100001;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin >> n;

    ll i,cnt=1,a[200010]={0},j;
    for(i=2 ; i<=n ; i++){
        if(a[i] == 0){
            a[i] = cnt;
            for(j = 2*i ; j<=n ; j+=i){
                if(a[j] == 0)
                    a[j] = cnt;
            }
            cnt ++;
        }
    }
    for(i=2 ; i<=n ; i++)
        cout << a[i] << " ";
}
