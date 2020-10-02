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
        int n,m;
        cin >> n >> m;
        cout << "W";
        for(int i=1;i<m;i++)
            cout << "B";
        cout << endl;
        for(int i=1;i<n;i++){
            for(int j=0;j<m;j++)
                cout << "B";
            cout << endl;
        }
    }
}

