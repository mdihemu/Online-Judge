#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

stack<char>st;
vector<stack<char>>container;
string s;

int add(int i)
{
    for(int j=0;j<container.size();j++){
        if(s[i] <= container[j].top()){
            container[j].push(s[i]);
            return 0;
        }
    }
    container.push_back(st);
    container[container.size()-1].push(s[i]);

    return 1;
}
int32_t main()
{
    int t = 1;
    while(cin >> s){
        container.clear();
        if(s == "end")
            break;

        int cnt = 0;
        for(int i=0;i<s.size();i++){
            cnt += add(i);
        }
        printf("Case %lld: %lld\n",t++,cnt);
    }
    return 0;
}
