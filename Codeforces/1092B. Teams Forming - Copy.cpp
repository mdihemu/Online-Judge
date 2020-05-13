#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,countl=0,p,q;
    cin >> n;
    int a[n];

    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    sort(a,a+n);

    for(int i=0;i<n;i+=2){
        countl += a[i+1] - a[i];
    }

    cout << countl;
}
