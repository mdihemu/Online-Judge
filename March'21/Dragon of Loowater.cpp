#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    while(cin >> n >> m){
        if(n==0 && m==0){
            break;
        }
        int head[n];
        for(int i=0;i<n;i++)
            cin >> head[i];
        int knight[m];
        for(int i=0;i<m;i++)
            cin >> knight[i];

        if(n>m){
            cout << "Loowater is doomed!\n";
            continue;
        }
        sort(head, head+n);
        sort(knight, knight+m);
        int cnt = 0, tot = 0;
        for(int i=0,j=0;j<m && i<n;j++){
            if(head[i]<=knight[j]){
                cnt += knight[j];
                i++;
                tot++;
            }
        }
        if(tot == n){
            cout << cnt << endl;
        }
        else
            cout << "Loowater is doomed!\n";
    }
}
