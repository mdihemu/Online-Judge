#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n){
        int cnt = 0;
        int m = n;
        while(m>0){
            cnt += m%10;
            m/=10;
        }
        if(cnt%4==0){
            cout << n << endl;
            break;
        }
        n++;
    }
}
