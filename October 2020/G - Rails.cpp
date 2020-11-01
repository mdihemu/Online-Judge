#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

//vector<int>vec;
int vec[1010];

int32_t main()
{
    int n;
    while(cin >> n && n){
        if(n==0)
            break;
        while(cin >> vec[0] && vec[0]){
            if(vec[0] == 0)
                break;
            for(int i=1;i<n;i++){
                cin >> vec[i];
            }
            stack<int>s;
            int temp = 0;
            for(int i=1;i<=n;i++){
                s.push(i);
                while(s.size() > 0 && vec[temp] == s.top()){
                    temp++;
                    s.pop();
                }
            }
            if(s.size() == 0)
                cout << "Yes\n";
            else
                cout << "No\n";
        }
        cout << endl;
    }
    return 0;
}
