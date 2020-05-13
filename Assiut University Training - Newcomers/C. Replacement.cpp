#include<bits\stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int a[n],sum =0;

    for(int i=0;i<n;i++){
        cin >> a[i];
        if(a[i] > 0)
            a[i] = 1;
        else if(a[i] < 0)
            a[i] = 2;
    }

    for(int i=0;i<n;i++){
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}

