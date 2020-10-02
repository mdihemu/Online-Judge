#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define pb push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define IN freopen("input.txt","r",stdin);
#define OUT freopen("output.txt","w",stdout);

const int N = 2e3 + 5;

void solve();
int32_t main()
{
    IOS;
    int t; cin >> t;
    while(t--) solve();
}

void solve()
{
    int n;
    cin >> n;
    vector<int>even,odd;
    for(int i=1;i<=n+n;i++){
        int x;
        cin >> x;
        if(x%2==0)
            even.pb(i);
        else
            odd.pb(i);
    }

    if(odd.size()%2){
        for(int i=0;i+1<odd.size();i+=2)
            cout << odd[i] << " " << odd[i+1] << endl;
        for(int i=0;i+1<even.size();i+=2)
            cout << even[i] << " " <<  even[i+1] << endl;
    }
    else{
        int z=0;
        for(int i=0;i+1<odd.size() && z+1<n;i+=2){
            cout << odd[i] << " " << odd[i+1] << endl;
            z++;
        }
        for(int i=0;i+1<even.size()&& z+1<n;i+=2){
            cout << even[i] << " " <<  even[i+1] << endl;
            z++;
        }
    }
}
