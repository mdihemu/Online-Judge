#include<bits\stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin >> t;
    while(t--){
        ll n,cnt=0;
        cin >> n;
        ll a[n];
        for(int i=0;i<n;i++)
            cin >> a[i];
        sort(a,a+n);
        for(int i=0;i<n;i++)
            if(a[i] != a[i+1])
            cnt++;
        cout << cnt << endl;
    }
}
