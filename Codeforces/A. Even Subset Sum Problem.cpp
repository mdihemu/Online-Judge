#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(n==1){
            ll a;
            cin >> a;
            if(a%2==0)
                cout << 1 << endl << 1 << endl;
            else
                cout << "-1\n";
        }
        else{
            int p[n];
            ll cnt = 0;
            ll index = 0;
            ll q=0,r=0;
            for(int i=0;i<n;i++){
                cin >> p[i];
                if(p[i]%2==0){
                    cnt++;
                    index = i+1;
                }
                else{
                    r = p[0];
                    q = p[1];
                }

            }
            if(cnt == 0){
                if(r%2!=0 && q%2!=0)
                    cout << 2 << endl << 1 << " " << 2 <<endl;
            }
            else
                cout << 1 << endl << index << endl;

        }

    }
}
