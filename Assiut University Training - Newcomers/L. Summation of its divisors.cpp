#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n,sum =0,i;
    cin >> n;
    //sum = n;

    for(i=1 ; i<= sqrt(n);i++){
        if(n%i == 0){
            sum += i;
            if( n/i != i)
                sum += n/i;
        }

    }
    cout << sum << endl;
}
