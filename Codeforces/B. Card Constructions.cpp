/*
Author: DarkMotion
*/
#include<bits/stdc++.h>
using namespace std;
//typedef long long int;
#define long long int int;
#define endl '\n';

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int cnt = 0;
        while(n>1){
            int l = 2;
            while(n>=l){
                n-=l;
                l+=3;
            }
            cnt++;
        }
        cout << cnt << endl;
    }

}

