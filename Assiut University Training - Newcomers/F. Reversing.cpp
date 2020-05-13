#include<bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[1000],sum =0,b[1000],x;

    for(int i=0;i<n;i++){
        int k;
        cin >> k;
        a[i] = k;
    }
    for(int i=n-1;i>=0;i--){
        if(i == 0)
            cout << a[i] << endl;
        else
            cout << a[i] << " ";
    }

    return 0;
}


