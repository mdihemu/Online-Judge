#include<bits\stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int a[n],sum =0;

    for(int i=0;i<n;i++){
        cin >> a[i];
        sum += a[i];
    }
    if(sum < 0)
        sum = sum * (-1);
    cout << sum << endl;

    return 0;
}
