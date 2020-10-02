#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'
#define pb push_back
#define s 10010

int main()
{
    ios::sync_with_stdio(0);
    //cin.tie(0);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>v(n);
        int even = 0;
        for(int &e : v){
            cin >> e;
            if(e%2==0)
                even++;
        }
        if(even%2==0){
            cout << "YES\n";
            continue;
        }
        else{
            int m=0;
            sort(v.begin(),v.end());
            for(int i=0;i<n;i++){
                if(v[i] + 1 == v[i+1]){
                    cout << "YES\n";
                    m++;
                    break;
                }
            }
            if(m==0)
                cout << "NO\n";
        }

    }
}

