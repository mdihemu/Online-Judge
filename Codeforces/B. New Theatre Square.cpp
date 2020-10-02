#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'
#define pb push_back
#define s 10010

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n,m,x,y;
        cin >> n >> m >> x >> y;
        ll cnt = 0;
        vector<string>ch(n);

        for(int i=0;i<n;++i)
            cin >> ch[i];
        for(int i=0;i<n;++i){
            for(int j=0;j<m;++j){
                if(ch[i][j] == '*')
                    continue;
                if( 2*x <= y || j==m-1 || ch[i][j+1] == '*'){
                    cnt += x;
                    ch[i][j] = '*';
                }
                else{
                    cnt += y;
                    ch[i][j] = ch[i][j+1] = '*';
                }
            }
        }
        cout << cnt << endl;
    }
}

