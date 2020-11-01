#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS;
    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
        if(x<38)
            cout << x << endl;
        else{
            if((x+1)%5==0)
                cout << x+1 << endl;
            else if((x+2)%5==0)
                cout << x+2 << endl;
            else
                cout << x << endl;
        }
    }
    return 0;
}
