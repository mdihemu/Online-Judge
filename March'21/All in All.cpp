#include<bits/stdc++.h>
using namespace std;

#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     pb          push_back
#define     mp          make_pair
#define     all(v)      v.begin(), v.end()
#define     IN          freopen("input.txt",'r',stdin)

const int INF = 1e9+5;
const int N = 205;

/*
int lcs(string s, string t, int ss, int tt)
{
    if(ss == 0 || tt == 0)
        return 0;
    if(s[ss-1] == t[tt-1])
        return 1 + lcs(s,t,ss-1,tt-1);
    else
        return max(lcs(s,t,ss,tt-1), lcs(s,t,ss-1,tt));
}

int32_t main()
{
    string s, t;
    while(cin >> s >> t){
        int ss = s.size();
        int tt = t.size();
        if(ss == lcs(s,t,ss,tt)){
            cout << "Yes\n";
        }
        else{
            cout << "No\n";
        }
    }
    return 0;
}
*/

main()
{
    string s, t;
    while(cin >> s >> t){
        int ss = s.size();
        int tt = t.size();
        int i,j;
        for(i=0, j=0;j<ss && i<tt; i++){
            if(t[i] == s[j])
                j++;
        }
        if(ss == j)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
}
