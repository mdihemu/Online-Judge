#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main()
{
    int n;
    while(cin>>n){
        if(n==0)
            break;
        int x = sqrt(n);
        if(n == x*x)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}
