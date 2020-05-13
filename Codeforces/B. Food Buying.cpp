#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        if(n<10){
            cout << n << endl;
        }
        else{
            long long int coun = 0,m;
            while(n>0){
                if(n >= 10){
                    coun += n/10;
                    m = n%10;
                    n = n/10;
                    n+=m;
                }
                else{
                    coun += n;
                }
            }
            cout << coun << endl;
        }
    }
}
