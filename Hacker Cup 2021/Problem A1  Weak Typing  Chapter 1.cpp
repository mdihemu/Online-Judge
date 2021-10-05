#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     IN          freopen("in.txt","r",stdin)
#define     OUT         freopen("output.txt","w",stdout);

const int MOD = 1e9+7;
const int INF = 2e5+5;
const int N = 205;

void solve();
int32_t main()
{
    IOS;

    ///For input file
    freopen("weak_typing_chapter_1_input.txt","r",stdin);

    ///Show the output
    freopen("output.txt","w",stdout);

    cout << fixed << setprecision(10);
    int _ = 1;
    //cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int numberoftestcase;
    cin >> numberoftestcase;
    for(int testcase = 1;testcase<=numberoftestcase;testcase++){
        cout << "Case #" << testcase << ": ";

        ///Main problem start
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cntx = 0, cnto = 0;
        string t = "";
        for(int i=0;i<n;i++){
            if(s[i] == 'X' || s[i] == 'O')
                t += s[i];
        }
        string ans = "";
        for(int i=0;i<t.size();i++){
            if(t[i] != t[i-1])
                ans += t[i];
        }
        int lol = ans.size() - 1;
        if(lol<0)
            lol = 0;
        cout << lol << endl;
    }
}

///Must see the constraints range
///Calculate the Time
