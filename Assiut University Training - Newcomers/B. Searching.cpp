#include<bits\stdc++.h>
using namespace std;

int main()
{
    long long int n,m;

    cin >> n;

    long long int a[n],sum =0;

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    cin >> m;

    for(int i=0;i<n;i++){
        if( m == a[i]){
            cout << i << endl;
            sum++;
            break;
        }
    }

    if(sum == 0)
        cout << "-1\n";

    return 0;
}
