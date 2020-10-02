#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int _=1; cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int n;
    cin >> n;
    int sum = 0;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        sum += x;
    }
    cout << (sum+n-1)/n << endl;
}
/*
void solve()
{
    double n;
    cin >> n;
    vector<double>a(n);
    double sum=0;
    for(double &e:a){
        cin >> e;
        sum += e;
    }
    sum = ceil(sum/n);
    cout << (int)sum << endl;
}*/
