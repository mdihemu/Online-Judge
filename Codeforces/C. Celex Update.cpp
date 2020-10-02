#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        long long x,y,m,n;
        cin >> x >> y >> m >> n;
        cout << ((m - x) * (n - y)) + 1 << endl;
    }
}
