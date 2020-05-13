#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

void add(ll a)
{
    ll i;
    for(i=1 ; i<=a ; i++){
        if(i == a)
            cout << i;
        else
            cout << i << " ";
    }

    cout << endl;
}

int main()
{
    ll a;
    cin >> a ;
    add(a);

    return 0;
}

