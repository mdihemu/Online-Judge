#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main()
{
    ll r,c,i,j,a[100][100],b[100][100],d[100][100];
    cin >> r >> c;

    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin >> a[i][j];
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin >> b[i][j];
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            d[i][j] = a[i][j] + b[i][j];
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout << d[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
