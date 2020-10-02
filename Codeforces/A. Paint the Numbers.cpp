#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int n;
    cin >> n;
    int cnt=0;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            cnt++;
            for(int j=i+1;j<n;j++){
                if(a[j]%a[i] == 0){
                    a[j] = 0;
                }
            }
        }
    }

    cout << cnt << endl;
}
