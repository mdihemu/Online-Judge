#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)

const int INF = 1e9+5;
const int N = 205;

map <string, vector<string > > adj;
map <string, int > vis;
map <string, string> ans;

bool bfs(string a, string b)
{
    queue<string>q;
    q.push(a);
    vis[a] = 1;
    while(!q.empty()){
        string f = q.front();
        q.pop();
        if(f==b)
            return true;
        for(int i=0;i<adj[f].size();i++){
            string str = adj[f][i];
            if(vis[str] == 0){
                vis[str] = vis[f] + 1;
                ans[str] = f;
                q.push(str);
            }
        }

    }
    return false;
}

void printsolution(string a, string b)
{
    if(a == b)
        return;
    printsolution(ans[a],b);
    cout << ans[a] << " " << a << endl;
}

void solve();
int32_t main()
{
    //IOS;
    cout << fixed << setprecision(10);
    int _ = 1;
    //cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int lol;
    bool ok = false;
    while(cin >> lol){
        if(ok)
            cout << endl;
        ok = true;
        int n = lol;
        while(n--){
            string s, t;
            cin >> s >> t;
            adj[s].push_back(t);
            adj[t].push_back(s);
        }
        string s, t;
        cin >> s >> t;

        if(bfs(s,t)){
            printsolution(t,s);
        }
        else
            cout << "No route\n";
        vis.clear();
        adj.clear();
        ans.clear();
    }
}

///Must see the constraints range
///Calculate the Time
