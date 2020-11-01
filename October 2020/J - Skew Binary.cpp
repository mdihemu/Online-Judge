#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main()
{
    while(1){
        string s;
        cin >> s;
        int n = s.size();
        int y = s[0] - '0';
        if(n==1 && y==0)
            break;
        int cnt=0;
        for(int i=0;i<s.size();i++){
            int x = s[i] - '0';
            cnt += x * (pow(2,n)-1);
            n--;
        }
        cout << cnt << endl;
    }
    return 0;
}
