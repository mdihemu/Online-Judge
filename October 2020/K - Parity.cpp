#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main()
{
    while(1){
        int n;
        cin >> n;
        if(n==0)
            break;
        int cnt = 0;
        string s = "";
        while(n>0){
            if(n%2==0){
                s += '0';
            }
            else{
                s+= '1';
                cnt++;
            }
            n/=2;
        }
        reverse(s.begin(), s.end());
        cout << "The parity of "<< s << " is " << cnt <<" (mod 2).\n";
    }
    return 0;
}
