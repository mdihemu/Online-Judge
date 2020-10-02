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
        int n,cnt = 0;
        cin >> n;
        vector<int>v(n);
        for(int &x : v)
            cin >> x;

        sort(v.begin(),v.end());

        cnt = v[n-1] - v[0];

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                cnt = min(cnt,v[j] - v[i]);
            }
        }

        cout << cnt << endl;
    }
}

