#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main()
{
    int n,x;
    cin >> n >> x;
    int cnt = 1;
    while(n/x>=1){
        cnt++;
        n/=x;
    }
    cout << cnt << endl;
    return 0;
}
