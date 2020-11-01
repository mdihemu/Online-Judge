#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main()
{
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;

        int cnt = (s[0] - 'A') * 26 * 26 + (s[1] - 'A') * 26 + (s[2] - 'A');

        int n=0;
        for(int i=4;i<8;i++){
            int x = s[i] - '0';
            n = n*10 + x;
        }

        if(abs(cnt-n) <= 100)
            cout << "nice\n";
        else
            cout << "not nice\n";
    }
    return 0;
}
