#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int x,n,m;
        cin >> x >> n >>m;

        if(x<= m*10){
            cout << "YES\n";
            continue;
        }

        while(n--){
             x = x/2;
             x +=10;
        }
        while(m--){
            x-=10;
        }
        if(x<=0){
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}
