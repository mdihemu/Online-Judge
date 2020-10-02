/*
Author: DarkMotion
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int M = 100001;

int main()
{
    ios::sync_with_stdio(0);
    //cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll>a;
        ll i=0;
        if(n%2!=0){
            for(i=2;i<=n;i+=2)
                a.push_back(i);
            for(i=1;i<=n;i+=2)
                a.push_back(i);
            for(i=0;i<n;i++)
                cout << a[i] << " ";
            cout << endl;
        }
        else{

        }
    }
}

