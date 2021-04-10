#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    bool ok = false;
    for(int i=0;i<n;i++){
        for(int j=i+2;j<n;j++){
            if(a[i] == a[j]){
                ok = true;
                break;
            }
        }
        if(ok)
            break;
    }

    if(ok)
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}
