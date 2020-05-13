/*
Author: DarkMotion
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    string ch;
    ll i = 1;
    while(cin >> ch){
        if(ch=="*")
            break;
        else if(ch == "Hajj"){
            cout << "Case " << i <<": " << "Hajj-e-Akbar" << endl;
            i++;
        }
        else{
            cout << "Case " << i <<": " << "Hajj-e-Asghar" << endl;
            i++;
        }
    }
}

