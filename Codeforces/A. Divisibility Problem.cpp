#include<bits\stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long int a,b,d=0;
        cin >> a >> b;

        if(a%b==0){
            cout << 0 << endl;
        }
        else{
            long long cnt=0;
            cnt = a/b + 1;
            d = b*cnt - a;
            cout << d << endl;
        }
    }
}
