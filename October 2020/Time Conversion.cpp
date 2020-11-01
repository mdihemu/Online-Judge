#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS;
    string s;
    cin >> s;

    char ch = s[8];
    int hour = (s[0]-'0')*10 + (s[1]-'0');
    int hour2=0;
    if(ch == 'A' && hour >= 10)
        hour = 0,hour2=0,cout << hour << hour2;
    else if(ch == 'P' && hour <12)
        cout << hour+12;
    else
        cout << s[0] << s[1];

    for(int i=2; i<8;i++)
        cout << s[i];
    cout << endl;

    return 0;
}
