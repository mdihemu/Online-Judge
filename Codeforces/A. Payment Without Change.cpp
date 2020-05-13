#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;

    for(int i=0;i<q;i++){
        int a,b,n,s;
        cin >> a >> b >> n >> s;

        if(s%n <=b && (1ll * a * n + b >=s))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
