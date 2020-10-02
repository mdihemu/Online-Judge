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
        vector <int> v;
        for(int i=0;i<n;i++){
            int m;
            cin >> m;
            v.pb(m);
        }

        sort(v.begin(),v.end());
        int cnt = 1;

        for(int i=n-1; i>=0;i--){
            if(v[i] <= i+1){
                cnt = i+2;
                break;
            }
        }
        cout << cnt << endl;
    }
}

