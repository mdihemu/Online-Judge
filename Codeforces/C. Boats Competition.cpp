#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int mostFrequent(int arr[],int n)
{
    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++)
        hash[arr[i]]++;

    int max_count = 0, res = -1;
    for (auto i : hash) {
        if (max_count < i.second) {
            res = i.first;
            max_count = i.second;
        }
    }

    return res;
}

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
    int a[55];
    for(int i=0;i<n;i++)
        cin >> a[i];
    int s = (n*(n+1))/2;
    int arr[s+1];

    int k=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            arr[k]=a[i]+a[j];
            k++;
        }
    }

    int mf = mostFrequent(arr,n);

    int cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]==0 || a[i]>=mf)
            continue;
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==mf && a[i]!=0 && a[j]!=0){
                cnt++;
                a[i] = 0;
                a[j] = 0;
            }
        }
    }
    cout << cnt << endl;
}
