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
        int a,b;
        cin >> a >> b;
        int x = min(a,b);
        int y = max(a,b);
        x = x * 2;
        int cnt = 0;
        if(y<=x)
            cnt = x * x;
        else
            cnt = y * y;
        cout << cnt << endl;
    }
}

