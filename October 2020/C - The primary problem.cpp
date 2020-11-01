#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

bool isprime(int n)
{
    bool flag=true;
    if(n<2)
        return false;
    for(int i=2; i<= sqrt(n); i++) {
       if(n%i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}
int32_t main()
{
    while(1){
        int n;
        cin >> n;
        if(n==0)
            break;
        else{
            cout << n << ":\n";
            bool ok = false;
            int x=0;
            for(int i=n-1; i>0; i--){
                if(isprime(i) && isprime(n-i)){
                    ok = true;
                    x = i;
                    break;
                }
            }
            if(ok){
                cout << n-x << "+" << x << endl;
            }
            else{
                cout << "NO WAY!\n";
            }
        }
    }
    return 0;
}
