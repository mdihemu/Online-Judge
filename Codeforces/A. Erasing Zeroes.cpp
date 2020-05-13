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
        string s;
        cin >> s;
        int n = s.size();
        int x=100,y=100,sum=0;
        for(int i = 0; i<n;i++){
            if(s[i] == '1'){
                x = i;
                break;
            }
        }
        for(int i = n-1; i>=0;i--){
            if(s[i] == '1'){
                y = i;
                break;
            }
        }

        if(x==100 || y==100)
            cout << 0 << endl;
        else{
            for(int i = x; i<=y;i++){
                if(s[i] == '0'){
                    sum += 1;
                }
            }
            cout << sum << endl;
        }
    }
}

