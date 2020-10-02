#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int n;
    cin >> n;

    vector<int>a(n);
    for(int &e : a)
        cin >> e;
    vector<int>p{1};
    int rest = 0, cur = a[0];

    for(int i=1;i<n;i++){
        if(a[i] <= a[0]/2){
            cur += a[i];
            p.push_back(i+1);
        }
        else
            rest += a[i];
    }

    if(cur > rest){
        cout << p.size() << endl;
        for(int i=0;i<p.size();i++){
            cout << p[i] << " ";
        }
        cout << endl;
    }
    else
        cout << 0 << endl;
    return 0;
}
