#include<bits\stdc++.h>
using namespace std;

int main()
{
    long long int x;

    cin >> x;

    for(int j=2;j<=x;j++){
        long long int count=0;
        for(int i=2; i<=sqrt(j) ;i++){
            if(j%i==0)
                count++;
        }
        if(count ==0 )
            cout << j << " ";
    }
    cout << endl;
    return 0;
}
