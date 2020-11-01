#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

string lol(string s)
{
    string n = "";
    bool ok = false;
    for(int i=0;i<s.size();i++){
        if(s[i] == ' ')
            ok = true;
        else if(ok) ///এই জায়গায় only if দিলে স্পেসসহ প্রিন্ট করে
            n += s[i];
    }
    return n;
}

int32_t main()
{
    int n;
    cin >> n;
    stack<string>ss;
    getchar();
    for(int i=0;i<n;i++){
        string s;
        getline(cin,s);
        if(s == "Kick"){
            if(!ss.empty()){
                ss.pop();
            }
        }
        else if(s == "Test"){
            if(ss.empty())
                cout << "Not in a dream\n";
            else
                cout << ss.top() << endl;
        }
        else
            ss.push(lol(s));
    }
    return 0;
}
