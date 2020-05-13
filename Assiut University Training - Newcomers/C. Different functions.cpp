#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void fun(ll n)
{
    ll bin =0;
    while(n>0){
        bin = bin*10 + n%2;
        n= n/2;
    }
    //cout << bin;
    ll temp = bin;
    //cout << temp << endl;;

    ll rev=0;
    while(temp!=0){
        rev = rev * 10 + temp %10;
        temp /=10;
    }
    //cout << rev;

    if(rev == bin)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main()
{
    ll n;
    cin >> n;
    if(n%2==0){
        cout << "NO\n";
    }
    else
        fun(n);
}
