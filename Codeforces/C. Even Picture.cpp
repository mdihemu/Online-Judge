#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define pb push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define IN freopen("input.txt","r",stdin);
#define OUT freopen("output.txt","w",stdout);

const int n1 = 1e8 + 5;
string cf = "codeforces";

int32_t main()
{
    IOS;
    int n;
    cin >> n;
    n++;
    vector<pair<int, int>>v;
    for(int i=0;i<n;i++){
        int x=i,y=i;
        int xx=x+1,yy=y+1;
        v.pb({x,y});
        v.pb({xx,y});
        v.pb({x,yy});
    }
    v.pb({n,n});
    cout << v.size() << endl;
    for(auto e:v){
        cout << e.first << " " << e.second << endl;
    }
}

