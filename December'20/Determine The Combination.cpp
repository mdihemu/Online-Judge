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
const int N = 1005;

char s[N];
int n,x;
vector<char>v;
bool ok[N];

void solve()
{
    if(v.size() == x){
        for(int i=0;i<x;i++){
            cout << v[i];
        }
        cout << endl;
        return;
    }

    for(int i=0;i<n;i++){
        if(!v.empty() && v[v.size()-1] > s[i])
            continue;
        if(!ok[i]){
            ok[i] = true;
            v.push_back(s[i]);
            solve();
            ok[i] = false;
            v.pop_back();
            while(s[i] == s[i+1])
                i++;
        }
    }
}

int32_t main()
{
    while(cin >> s >> x){
        n = strlen(s);
        sort(s,s+n);
        solve();

        v.clear();
        memset(s,0,sizeof(s));
        memset(ok,false,sizeof(ok));

    }
    return 0;
}
