#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while(t--){
        ll a;
        cin >> a;
        for(int k = 3;k<=a;k++){
            if(a%k==0){
                cout << a/k << endl;
                break;
            }
            else
                k = k*2;
        }
    }
}
