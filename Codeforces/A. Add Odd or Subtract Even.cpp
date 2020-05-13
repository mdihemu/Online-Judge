/*
Author: DarkMotion
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    cin >> t;
    while(t--){
        ll a,b;
        cin >> a >> b;
        if(a>b){
            if(a%2==0){
                if(b%2==0)
                    cout << 1 << endl;
                else
                    cout << 2 << endl;
            }
            else{
                if(b%2==0)
                    cout << 2 << endl;
                else
                    cout << 1 << endl;
            }

        }
        else if(b>a){
            if(a%2==0){
                if(b%2==0)
                    cout << 2 << endl;
                else
                    cout << 1 << endl;
            }
            else{
                if(b%2==0)
                    cout << 1 << endl;
                else
                    cout << 2 << endl;
            }

        }
        else
            cout << 0 << endl;
    }
}

