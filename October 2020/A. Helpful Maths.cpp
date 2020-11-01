#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

void solve();
int32_t main()
{
    IOS;
    int _ = 1;
    //cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    string s;
    cin >> s;
    char arr[1010];
    int j=0;
    for(int i=0;i<s.size();i++){
        if(s[i] != '+'){
            arr[j] = s[i];
            j++;
        }
    }
    sort(arr,arr+j);
    for(int i=0;i<j;i++){
        cout << arr[i];
        if(i < j-1)
            cout << "+";
    }
    cout << endl;
}
