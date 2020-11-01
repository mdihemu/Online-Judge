#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main()
{
    int n;
    cin >> n;
    while(n--){
        stack<char>ch;
        for(int i=0;i<ch.size();i++){
            ch.pop();
        }
        string s;
        cin >> s;
        for(int i=0;i<s.size();i++){
            if(s[i] == '(' || s[i] == '[')
                ch.push(s[i]);
            else if(ch.empty()){
                ch.push('A');
                break;
            }
            else if(s[i] == ')' && ch.top() == '(')
                ch.pop();
            else if(s[i] == ']' && ch.top() == '[')
                ch.pop();
            else{
                ch.push('A');
                break;
            }
        }
        if(ch.size() == 0)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
/*

3
([])
(([()])))
([()[]()])()

*/
