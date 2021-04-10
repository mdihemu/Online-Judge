#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for(int loop = 1; loop <= test; loop++){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        string t = s;
        reverse(t.begin(), t.end());
        int cnt = 0;
        int nn = (n+1)/2;
        for(int i=0;i<nn;i++){
            if(s[i] != t[i])
                cnt++;
        }
        int ans = 0;
        if(k>cnt)
            ans = k - cnt;
        else if(k == cnt)
            ans = 0;
        else
            ans = cnt - k;

        cout << "Case #" << loop << ": "  << ans << endl;
    }
}
