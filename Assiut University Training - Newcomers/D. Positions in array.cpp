#include<bits\stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int a[n],sum =0;

    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i] <= 10)
            cout << "A[" << i << "] = " << a[i] << endl;
        else
            continue;
    }

    return 0;
}
