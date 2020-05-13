#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main()
{
    ll a,b,sum=0,temp=0;
    cin >> a>>b;
    if(b>a){
        temp = b;
        b=a;
        a=temp;
    }
    sum =( (a * (a+1)) - (b * (b-1)))/2;
    cout << sum << endl;
}
