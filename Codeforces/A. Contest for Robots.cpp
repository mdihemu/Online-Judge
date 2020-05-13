/*
Author: DarkMotion
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n;
    cin >> n;

    int x=0,y=0,i,z=0;
    int a[n],b[n];

    for(i=0 ; i<n;i++)
        cin >> a[i];
    for(i=0 ; i<n;i++)
        cin >> b[i];

    for(i=0 ; i<n;i++){
        if(a[i]>b[i])
            x++;
        if(b[i]>a[i])
            y++;
    }

    if(x==0)
        cout << -1 << endl;
    else{
        int p = ceil((float) (y+1) / x);
        cout << p << endl;
    }

}
