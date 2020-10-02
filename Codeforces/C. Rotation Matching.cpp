#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define pb push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define IN freopen("input.txt","r",stdin);
#define OUT freopen("output.txt","w",stdout);

const int N = 2e5 + 5;
int a[N],b[N],pos[N];
map<int,int>off;

int32_t main()
{
    IOS;
    int n;
    cin >> n;
    for(int i=1;i<=n;i++){
        cin >> a[i];
        pos[a[i]] = i;
    }
    for(int i=1;i<=n;i++)
        cin >> b[i];
    for(int i=1;i<=n;i++){
        int c = pos[b[i]] - i;
        if(c<0)
            c += n;
        off[c]++;
    }
    int cnt = 0;
    for(auto &e : off)
        cnt = max(cnt,e.second);
    cout << cnt << endl;
}
