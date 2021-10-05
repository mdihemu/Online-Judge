#include<bits/stdc++.h>
using namespace std;

int main()
{
    string t;
    cin >> t;
    int n = t.size();
    for(int i=0;i<n;i++){
            for(int len=2;len<=n-i;len++){
                string tt = "";
                tt = t.substr(i, len);
                cout << tt << endl;
                //ans = (ans + problem1(t))% MOD;
            }
        }
}
