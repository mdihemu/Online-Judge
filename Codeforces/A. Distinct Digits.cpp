#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define pb push_back
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define IN freopen("input.txt","r",stdin);
#define OUT freopen("output.txt","w",stdout);

const int sz = 5e5 + 5;

int32_t main()
{
    IOS;
    int a,b;
    cin >> a >> b;

    for(int i=a;i<=b;i++){
        int x = i,ant=0;
        set<int>v;
        while(x>0){
            int cnt = x%10;
            v.insert(cnt);
            ant++;
            x /= 10;
        }

        if(v.size() == ant){
            cout << i << endl;
            return 0;
        }
    }
    cout << "-1\n";
}

