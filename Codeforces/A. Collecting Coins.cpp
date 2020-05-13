#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        long long int a,b,c,d;
        cin >> a >> b >> c >> d;
        int x= a +b+c+d;
        int m = x%3;
        int n = x/3;

        if(a <= n && b<=n && c<=n && m==0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
