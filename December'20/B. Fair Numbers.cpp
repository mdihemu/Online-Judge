#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         unsigned long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     all(v)      v.begin(), v.end()
#define     IN          freopen("input.txt",'r',stdin)

const int INF = 1e18;
const int N = 205;

bool isvalid(int n)
{
    int a[12] = {0};
    int temp = n;
    while(temp>0){
        a[temp%10] = 1;
        temp/=10;
    }
    for(int i=2;i<10;i++){
        if(a[i]!=0 && n%i!=0)
            return false;
    }
    return true;
}
void solve();
int32_t main()
{
    IOS;
    cout << fixed << setprecision(10);
    int _ = 1;
    cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    for(int i=n;;i++){
        if(isvalid(i)){
            cout << i << endl;
            break;
        }
    }
}

///Must see the constraints range
///Calculate the Time
