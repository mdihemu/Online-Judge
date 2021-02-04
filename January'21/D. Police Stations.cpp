#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)

const int INF = 1e9+5;
const int N = 3e5+10;

vector< pair<int, int>> road[N];
set<int>s;
bool ok[N];

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
    memset(ok, false, sizeof(ok));
    queue<int>q;

    int n, k, d;
    cin >> n >> k >> d;

    for(int i=1;i<n;i++)
        s.insert(i);

    for(int i=0;i<k;i++){
        int x;
        cin >> x;
        ok[x] = true;
        q.push(x);
    }

    for(int i=1;i<n;i++){
        int u, v;
        cin >> u >> v;
        road[u].push_back({v,i});
        road[v].push_back({u,i});
    }

    while(!q.empty()){
        int a = q.front();
        q.pop();
        for(auto i:road[a]){
            if(!ok[i.first]){
                q.push(i.first);
                s.erase(i.second);
                ok[i.first] = true;
            }
        }
    }

    cout << s.size() << endl;
    for(int i:s)
        cout << i << " ";
    cout << endl;
}

///Must see the constraints range
///Calculate the Time
