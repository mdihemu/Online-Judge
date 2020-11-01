#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int _=1;
    cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    int day = 0;
    int task = 0;
    for(int i=0;i<n;i++){
        task += a[i];
        if(task<k){
            day = i;
            break;
        }
        else{
            task -= k;
            day++;
        }
    }
    if(task>0){
        day += task/k;
    }
    cout << day+1 << endl;
}
/*
2
6 5
10 5 5 3 2 1
1 1
100
*/
