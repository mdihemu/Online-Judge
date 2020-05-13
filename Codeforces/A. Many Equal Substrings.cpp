/*
Author: DarkMotion
*/
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mx 100001;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n,k;
    cin >> n >> k;
    string s;
    cin >> s;

    string a = s;
    ll cnt = 1, pos = 1;

    while(cnt < k){
        if(pos>= a.size()){
            a += s;
            ++cnt;
        }
        else{
            bool ans = true;
            int l = 0;

            for(int i = 0;i<s.size() ; i++){
                if(pos +i >= a.size())
                    break;
                l++;
                if(a[pos + i] != s.size())
                    ans = false;
            }
            if(ans){
                a += s.substr(l);
                cnt++;
            }
        }
        pos++;
    }
    cout << a << endl;
}
