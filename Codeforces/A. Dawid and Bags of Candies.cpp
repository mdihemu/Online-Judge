#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define pb push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define IN freopen("input.txt","r",stdin);
#define OUT freopen("output.txt","w",stdout);

const int sz = 5e5 + 5;

int32_t main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    int sum = a + b + c + d;
    if(sum%2==1){
        cout << "NO\n";
        return 0;
    }
    sum /= 2;
    if( a+b==sum || a+c==sum || a+d==sum || b+c==sum || b+d==sum || c+d==sum || a==sum || b==sum || c==sum || d==sum)
        cout << "YES\n";
    else
        cout << "NO\n";
}
