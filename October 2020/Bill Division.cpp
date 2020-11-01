#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS;
    int n,k;
    cin >> n >> k;
    int a[n];
    int sum=0;
    for(int i=0;i<n;i++){
        cin >> a[i];
        sum += a[i];
    }
    int bill;
    cin >> bill;
    int b = sum - a[k];
    if(bill == b/2)
        cout << "Bon Appetit\n";
    else{
        cout << bill - b/2 << endl;
    }
    return 0;
}
