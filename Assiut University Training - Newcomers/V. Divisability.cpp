#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a,b,x;
    cin >> a >> b >> x;
    ll sum = 0,i;
    for(i=a; i<=b;i++){
        if(i%x==0){
            sum += i;
            i=i+x-1;
        }
    }
    cout << sum << endl;

    return 0;
}
