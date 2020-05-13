#include<bits\stdc++.h>
using namespace std;

int main()
{
    long long int x,count=0;

    cin >> x;

    for(int i=2; i<=sqrt(x) ;i++){
        if(x%i==0)
            count++;
    }
    if(count ==0 )
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
