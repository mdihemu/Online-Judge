#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main()
{
    int n,m;
    cin >> n >> m;
    int dist[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            dist[i][j] = 99999;
            if(i==j)
                dist[i][j] = 0;
        }
    }
    for(int i=0;i<m;i++){
        int x,y;
        cin >> x >> y;
        x--;
        y--;
        dist[x][y] = dist[y][x] = 1;
    }

    for(int k=0;k<n;k++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(dist[i][j] == 0)
                    continue;
                if(dist[i][k] + dist[k][j] < dist[i][j]){
                    dist[i][j] = dist[i][k] + dist[k][j];
                }
            }
        }
    }
    int cnt = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cnt = max(cnt,dist[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout << dist[i][j] << " ";
        }
        cout << endl;
    }
    if(cnt>n)
        cout << "=[\n";
    else
        cout <<"=] " <<  cnt << endl;

    return 0;
}
