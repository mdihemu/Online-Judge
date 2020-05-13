#include<bits\stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    while(n--){
        long long int a;
        cin >> a;
        if(a<10){
            cout << a<< endl;
            continue;
        }
        while(a!=0){
            long long int digit = a%10;
            cout << digit << " ";
            a = a/10;
        }
        cout << endl;
    }

    return 0;
}
