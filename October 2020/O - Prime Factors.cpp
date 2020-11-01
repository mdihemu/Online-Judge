#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    while(1){
        int n;
        cin >> n;
        if(n==0)
            break;
        cout << n << " = ";
        vector<int>v;
        if(n<0){
            v.push_back(-1);
            n = n * (-1);
        }
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                v.push_back(i);
                n = n/i;
                i = 1;
            }
        }
        v.push_back(n);
        int x = v.size();
        cout << v[0];
        if(x!=1){
            for(int i=1;i<x;i++){
                if(i<x){
                    cout << " x ";
                }
                cout << v[i];
            }
        }
        cout << endl;
    }
    return 0;
}
