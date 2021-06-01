#include<bits\stdc++.h>
using namespace std;

int main()
{
    long long a,b,i,x,n,count =0;
    cin >> a >> b;

    for(i=a;i<=b;i++){
        x = i;
        while(x!=0){
            if(x==4 || x==7){
                cout << i << " ";
                count++;
            }

            n = x % 10;
            if( n== 4 || n==7)
                x = x / 10;
            else
                break;
        }
    }
    if(count == 0)
        cout << "-1";
    cout << endl;

    return 0;
}
