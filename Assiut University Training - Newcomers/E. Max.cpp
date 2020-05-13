#include<bits\stdc++.h>
using namespace std;

int main()
{
    long long n,x,ma=0;
    cin >> n;

    while(n--){
        cin >> x;
        ma = max(ma,x);
    }
    cout << ma << endl;
}
