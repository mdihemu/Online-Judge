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
        int n,k,cnt=0;
        cin >> n >> k;

        cnt = n;
        for(int i = 1;i<=sqrt(n);i++){
            if(n%i==0){
                if(i<=k)
                    cnt = min(cnt,n/i);
                if(n/i <=k)
                    cnt = min(cnt,i);
            }
        }
        cout << cnt << endl;
    }
}

