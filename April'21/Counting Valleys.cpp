#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     pb          push_back
#define     mp          make_pair
#define     all(v)      v.begin(), v.end()
#define     IN          freopen("input.txt",'r',stdin)

const int INF = 1e9+5;
const int N = 205;

int Frequency(string &s, string &t)
{
    int cnt = 0;
    for(int i=0;i<s.size()-2;i++){
        int j;
        for(j=0;j<3;j++){
            if(s[i+j] != t[j])
                break;
        }
        if(j==3){
            cnt++;
            j = 0;
        }
    }
    return cnt;
}

int32_t main()
{
    IOS;
    int n;
    cin >> n;
    string s;
    cin >> s;

    string t = "UDU", tt = "DUD";
    int cnt = Frequency(s,t);
    cnt += Frequency(s,tt);
    cout << cnt << endl;
    return 0;
}
