#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll a;
        cin >> a;
        if(a%4==0){
            ll n = 0;
            cout << "YES\n";
            for(int i=1;i<=a;i++){
                if(i%2==0){
                    cout << i << " ";
                    n+=i;
                }
            }

            for(int i=1;i<=a;i++)
                if(i%2!=0){
                    if(i==a-1)
                        cout << n << "\n";
                    else{
                        cout << i << " ";
                        n-=i;
                    }
                }
        }
        else
            cout << "NO\n";
    }
}
