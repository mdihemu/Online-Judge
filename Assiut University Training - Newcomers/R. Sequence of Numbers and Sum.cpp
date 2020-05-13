#include<bits\stdc++.h>
using namespace std;

int main()
{
    long long a,b;
    while(cin >> a >> b){
        long long count=0,i,temp;
        if(a<=0 || b<=0)
            break;
        if(a>b){
            temp = a;
            a = b;
            b = temp;
        }
        for(i=a;i<=b;i++){
            cout << i << " ";
            count+=i;
        }
        cout << "sum ="<< count << endl;
    }

    return 0;
}
