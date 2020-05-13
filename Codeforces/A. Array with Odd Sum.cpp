#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--){
        int a;
        cin >> a;
        int coun = 0;
        bool odd = false, even = false;
        for(int i=0;i<a;i++){
            int m;
            cin >> m;
            coun = coun +m;
            odd |= m%2!=0;
            even |= m%2==0;
        }
        if(coun %2 !=0 || (odd && even))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
