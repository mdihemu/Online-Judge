#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'
#define pb push_back
#define siz 10010

int frequency(ll n)
{
    ll mi=10,ma=0,cnt=0;

    while(n > 0){
        ll y = n %10;
        n /= 10;
        mi = min(mi,y);
        ma = max(ma,y);
    }
    cnt  = mi * ma;

    return cnt;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        ll a,n,cnt=0;
        cin >> a >> n;
        n--;
        while(n--){
            cnt = frequency(a);
            if(cnt == 0)
                break;
            a+= cnt;
        }
        cout << a << endl;
    }
}
