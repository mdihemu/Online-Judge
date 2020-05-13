#include<bits\stdc++.h>
using namespace std;

int search(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int a[1000],sum =0,b[1000],x;

    for(int i=0;i<n;i++){
        int k;
        cin >> k;
        a[i] = k;
        b[i] = k;
    }
    sort(b,b+n);
    sum = b[0];

    x = search(a,n,sum);

    cout << sum << " " << x+1 << endl;

    return 0;
}

