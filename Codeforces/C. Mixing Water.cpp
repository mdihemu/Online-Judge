#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'
#define pb push_back
#define s 10010

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        ll h,c,t,cnt=0;
        cin >> h >> c >> t;
        h -= c;
        t -= c;
        if(t>=h)
            cnt = 1;
        else if(2*t <= h)
            cnt = 2;
        else{
            double n = floor(((double) h-t) / (2.0 * t - h));
            double temp1 = h * (n+1) / (2*n +1);
            double temp2 = h * (n+2) / (2*n +3);

            if(abs(t-temp1) <= abs(t-temp2))
                cnt = 2 * (int)n+1;
            else
                cnt = 2 * (int)n+3;
        }
        cout << cnt << endl;
    }
}
