#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)

const int MOD = 1e9+7;
const int INF = 2e5+5;
const int N = 205;

string s, ans = "";
int n = 0;

int cntvowel(int i)
{
    char ch = tolower(s[i]);
    if(ch == 'a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
        return 1 + cntvowel(i+1);
    if(i>=n)
        return 0;
    return cntvowel(i+1);
}

void solve();
int32_t main()
{
    IOS;
    cout << fixed << setprecision(10);
    int _ = 1;
    //cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    getline(cin, s);
    n = s.size();
    cout << cntvowel(0) << endl;

}

///Must see the constraints range
///Calculate the Time
