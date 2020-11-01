#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int _ = 1;
    //cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int a[5][5];
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            cin >> a[i][j];

    int ok = 0;
    int aa=0,aaa=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(a[i][j] == 1){
                aa = i,aaa=j;
                ok++;
                break;
            }
        }
        if(ok>0)
            break;
    }
    cout << abs(aa-2) + abs(aaa-2) << endl;
}
