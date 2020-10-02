#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define pb push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define IN freopen("input.txt","r",stdin);
#define OUT freopen("output.txt","w",stdout);

const int N = 2e5 + 5;

void solve();
int32_t main()
{
    IOS;
    int t; cin >> t;
    while(t--) solve();
}

void solve()
{
    int n,k;
    cin >> n >> k;
    vector<int>a(n);
    for(int &e:a)
        cin >> e;
    sort(a.begin(),a.end());

    int sum=0;
    vector<int>w;
    for(int i=0;i<k;i++){
        int x;
        cin >> x;
        if(x==1){
            sum += a.back()*2;
            a.pop_back();
        }
        else
            w.push_back(x);
    }
    sort(w.rbegin(),w.rend());
    for(int i=0;i<w.size();i++){
        sum += a.back();
        a.pop_back();
    }
    for(int i=0,j=0;i<w.size();i++){
        sum += a[j];
        j+= w[i]-1;
    }
    cout << sum << endl;
}
