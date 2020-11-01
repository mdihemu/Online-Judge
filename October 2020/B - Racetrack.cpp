#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main()
{
    int a,b;
    cin >> a >> b;
    int cnt = a*b;
    for(int i=min(a,b);i<=cnt;i++){
        if(i%a==0 && i%b==0){
            cnt = i;
            break;
        }
    }
    cout << cnt << endl;
    return 0;
}
