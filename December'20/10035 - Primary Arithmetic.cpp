#include<bits/stdc++.h>
using namespace std;

#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     pb          push_back
#define     mp          make_pair
#define     all(v)      v.begin(), v.end()
#define     IN          freopen("input.txt",'r',stdin)

const int INF = 1e9+5;
const int N = 205;

int32_t main()
{
    while(1){
        int a,b;
        cin >> a >> b;
        if(a == 0 && b == 0)
            break;
        int cnt = 0, carry = 0;
        while(a>0 || b>0){
            int x = a%10;
            int y = b%10;

            if(x+y+carry >= 10){
                cnt++;
                carry = 1;
            }
            else
                carry = 0;
            a/=10;
            b/=10;
        }
        if(cnt==0)
            cout << "No carry operation.\n";
        else if(cnt == 1)
            cout << "1 carry operation.\n";
        else
            cout << cnt << " carry operations.\n";
    }
    return 0;
}
