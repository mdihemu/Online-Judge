#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a;
    double sum=0;
    for(int i=0;i<n;i++){
        cin >> a;
        sum = sum + a;
    }
    cout << fixed <<  setprecision(12) << sum/n << endl;
}
