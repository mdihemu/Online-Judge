#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define pb push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define IN freopen("input.txt","r",stdin);
#define OUT freopen("output.txt","w",stdout);

const int N = 2e5 + 5;
const double pi = 3.141592653589793238;

int32_t main()
{
    IOS;
    int n;
    cin >> n;
    vector<int>a(n);
    for(int &e:a)
        cin >> e;
    sort(a.begin(),a.end());

    int m;
    cin >> m;
    vector<int>b(m);
    for(int &e:b)
        cin >> e;
    sort(b.begin(),b.end());

    int i=0,j=0,cnt=0;

    while(i<n && j<m){
        if(abs(a[i] - b[j])<=1){
            cnt++;
            i++;
            j++;
        }
        else if(a[i]<b[j])
            i++;
        else if(a[i]>b[j])
            j++;
    }

    cout << cnt << endl;
}
