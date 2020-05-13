#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b,temp=0;
    cin >> t;

    for(int i=0;i<t;i++){
        cin >> a >> b;
        if(a>b){
            temp = b;
            b=a;
            a=temp;
        }
        if( ((a+b)%3 ==0 ) && (b <= 2*a)){
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}
