#include<bits\stdc++.h>
using namespace std;

long long int factorial(int n) {
    if (n>=1)
        return n*factorial(n-1);
    else
        return 1;
}

int main()
{
    long long int n,x;
    cin >> n;

    while(n--){
        cin >> x;
        cout << factorial(x) << endl;
    }
}
