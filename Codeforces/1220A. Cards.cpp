#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,count0=0,count1=0;

    cin >> n;
    char a[n];

    for(int i=0;i<n;i++)
        cin >> a[i];

    for(int i=0;i<n;i++){
        if(a[i] == 'z')
            count0++;
        else if(a[i] == 'n')
            count1++;
    }

    int m = count0+count1;

    for(int i=0;i<m;i++){
        if(i<count1)
            cout << 1 << " ";
        else
            cout << 0 << " ";
    }
    cout << endl;
}
