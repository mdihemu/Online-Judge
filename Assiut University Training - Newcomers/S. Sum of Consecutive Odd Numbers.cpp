#include<bits\stdc++.h>
using namespace std;

int main()
{
    long long t,a,b;
    cin >> t;
    while(t--){
        long long count=0,temp,i;
        cin >> a >> b;
        if(a>b){
            temp = a;
            a = b;
            b = temp;
        }
        for(i=a+1;i<b;i++){
            if(i%2!=0)
                count+=i;
        }
        cout << count << endl;
    }
    return 0;
}
