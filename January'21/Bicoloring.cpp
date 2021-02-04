#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)

const int INF = 1e9+5;
const int N = 1e5+10;
vector<int> adj[N];
int col[N];

bool bfs(int n)
{
    memset(col, 0, sizeof(col));
    queue<int>q;
    q.push(n);
    col[n] = 1;
    while(!q.empty()){
        int a = q.front();
        q.pop();
        for(auto i:adj[a]){
            if(col[i] == 0){
                q.push(i);
                if(col[a] == 1)
                    col[i] = 2;
                else
                    col[i] = 1;
            }
            else if(col[i] == col[a])
                return false;
        }
    }
    return true;
}

int32_t main()
{
    IOS;
    cout << fixed << setprecision(10);

    int lol;
    while(cin >> lol, lol){
        int n;
        cin >> n;
        int m = n;
        while(m--){
            int a,b;
            cin >> a >> b;
            adj[a].push_back(b);
            adj[b].push_back(a);
        }
        if(bfs(0)){
            cout << "BICOLORABLE.\n";
        }
        else
            cout << "NOT BICOLORABLE.\n";
        for(int i=0;i<N;i++)
            adj[i].clear();
    }
}

///Must see the constraints range
///Calculate the Time
