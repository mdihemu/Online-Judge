#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

///In number theory, a perfect number is a positive integer that is equal to the
///sum of its positive divisors, excluding the number itself.
///For instance, 6 has divisors 1, 2 and 3 (excluding itself),
///and 1 + 2 + 3 = 6, so 6 is a perfect number.

bool isprime(int n)
{
    bool flag=true;
    if(n<2)
        return false;
    for(int i=2; i<= sqrt(n); i++){
       if(n%i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}

int prime[] = {2,3,5,7,11,13,17,19,23,29,31};

int32_t main()
{
    while(1){
        int n;
        cin >> n;
        if(n==0)
            break;
        bool ok = false;
        ok = isprime(n);
        /*
        for(int i=0;i<11; i++){
            if(n==prime[i])
                ok = true;
        }
        */
        if(ok){
            if(n==11 || n==23 || n==29)
                cout << "Given number is prime. But, NO perfect number is available.\n";
            else{
                unsigned int sum = pow(2,n-1) * (pow(2,n)-1);
                cout << "Perfect: " << sum << "!\n";
            }
        }
        else
            cout << "Given number is NOT prime! NO perfect number is available.\n";
    }
    return 0;
}
