#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)

const int INF = 1e9+5;
const int N = 205;

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
    int n;
    cin >> n;

    vector<string>v = {"Power", "Time", "Space", "Soul", "Reality", "Mind"};


    for(int i=0;i<n;i++){
        string s;
        cin >> s;
        if(s == "purple")
            v.erase(find(v.begin(), v.end(), "Power"));
        else if(s == "green")
            v.erase(find(v.begin(), v.end(), "Time"));
        else if(s == "blue")
            v.erase(find(v.begin(), v.end(), "Space"));
        else if(s == "orange")
            v.erase(find(v.begin(), v.end(), "Soul"));
        else if(s == "red")
            v.erase(find(v.begin(), v.end(), "Reality"));
        else if(s == "yellow")
            v.erase(find(v.begin(), v.end(), "Mind"));
    }

    cout << v.size() << endl;
    for(auto i:v)
        cout << i << endl;
}

///Must see the constraints range
///Calculate the Time
