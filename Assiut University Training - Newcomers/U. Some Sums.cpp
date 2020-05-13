#include<bits\stdc++.h>
using namespace std;

int main()
{
    long long n,a,b,m,sum = 0;

    cin >> n >> a >> b;

    for(int i=1 ; i<=n ; i++){
        long long digit = 0;

        m = i;

        while(m!=0){
            digit += m%10;
            m = m /10;
        }

        if(digit >=a && digit <=b){
            sum = sum + i;
        }
    }

    cout << sum << endl;

    return 0;
}
