#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main()
{
    int n;
    cin >> n;
    int cnt = 100000;
    for(int i=0;i<n;i++){
        cnt *= 1.05;
        if(cnt%1000!=0)
            cnt = (cnt/1000 + 1) * 1000;
    }
    cout << cnt << endl;
    return 0;
}
