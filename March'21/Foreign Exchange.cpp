#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(cin >> n){
        if(n==0)
            break;
        vector< pair< int, int> > v, vv;
        for(int i=0;i<n;i++){
            int source, destination;
            cin >> source >> destination;
            v.push_back({source, destination});
            vv.push_back({destination, source});
        }
        sort(v.begin(), v.end());
        sort(vv.begin(), vv.end());

        if(v==vv)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
