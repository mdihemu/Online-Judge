#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define pb push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define IN freopen("input.txt","r",stdin);
#define OUT freopen("output.txt","w",stdout);

const int N = 2e5 + 5;

int32_t main()
{
    IOS;
    int n;
    cin >> n;
    int x = sqrt(n);
    int cnt = N;
    int a=0,b=0;

    for(int i=1;i<=x;i++){
        if(n%i==0){
            a = i;
            b = n / i;
        }
        int m = 2*a + 2*b;
        cnt = min(m,cnt);
    }
    cout << cnt << endl;
}
