#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    int n,m;
    while(cin >> n){
        int x = (n+1)/2;
        x = x*x;
        x = 2*x - 1;
        int sum = 3*x-6;
        cout << sum << endl;
    }
    return 0;
}
