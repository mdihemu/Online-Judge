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
    return 0;
}

void solve()
{
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    int cnt=0,prev=0;
    for(int i=0;i<n;i++)
        if(s[i]=='1')
            prev++;
    for(int i=0;i<n;i++){
        if(i=='1'){
            i+=k;
            continue;
        }
        else{
            int temp=0;
            for(int j=i;j<=i+k;j++){
                if(s[j]=='1'){
                    i = j+k;
                    temp++;
                    break;
                }
            }
            if(temp==0){
                s[i] = '1';
                i = i+k;
                cnt++;
            }
        }
    }
    //cout << s << endl;
    if(cnt>prev)
        cnt = cnt-prev;
    cout << cnt << endl;
}
