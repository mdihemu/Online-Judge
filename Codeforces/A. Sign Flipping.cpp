#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define pb push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define IN freopen("input.txt","r",stdin);
#define OUT freopen("output.txt","w",stdout);

const int N = 100;
const double pi = 3.141592653589793238;

void solve();
int32_t main()
{
    IOS;
    int t; cin >> t;
    while(t--) solve();
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }

    for(int i=0;i<n;i++){
        if(i%2==0){
            if(a[i]>0)
                a[i] = -a[i];
        }
        else{
            if(a[i]<0)
                a[i] = -a[i];
        }
    }
    for(int i=0;i<n;i++){
        if(i>0)
            cout << " ";
        cout << a[i];
    }
    cout << endl;
}
