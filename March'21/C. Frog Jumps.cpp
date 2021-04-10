#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int mx = 0;
    int last = -1;
    for(int i=0;i<s.size();i++){
        if(s[i] == 'R'){
            mx = max(mx, i-last);
            last = i;
        }
    }
    int temp = s.size();
    cout << max(mx, temp-last) << endl;
}

int main()
{
    int testcase;
    cin >> testcase;
    while(testcase--)
        solve();
}
