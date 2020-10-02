#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'
#define pb push_back
#define s 10010

int main()
{
    int n;
    cin >> n;
    ll cnt=0;
    for(int i=1;i<=n;i++){
        if(i%3==0)
            continue;
        else if(i%5==0)
            continue;
        else
            cnt += i;
    }
    cout << cnt << endl;
}
