#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main()
{
    ll n;

    cin >> n;
    if(n==0)
        cout << "0";

    ll bin[64],i=0;

    while(n!=0){
        bin[i] = n%2;
        n = n/2;
        i++;
    }


    for(int j=i-1;j>=0;j--){
        cout << bin[j];
    }
    cout << endl;

    return 0;
}
