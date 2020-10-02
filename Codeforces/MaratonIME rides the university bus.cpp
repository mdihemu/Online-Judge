#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int n,m;
    cin >> n >> m;
    int a[n+1]={0};
    int ab[n+1]={0};

    for(int i=1;i<=n;i++){
        cin >> a[i];
        ab[i] = a[i] + ab[i-1];
    }

    while(m--){
        int x,y;
        cin >> x >> y;
        int sum = ab[y] - ab[x-1];
        if(sum %2==0)
            cout << "Sim\n";
        else
            cout << "Nao\n";
    }
    return 0;
}
