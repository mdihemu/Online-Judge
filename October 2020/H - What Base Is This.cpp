#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int base(string s)
{
    int n = 1;
    for(int i=0;i<s.size();i++){
        int nn = 1;
        if(s[i] >= 'A')
            nn =  (s[i] - 'A' + 10);
        else
            nn = (s[i] - '0');
        if(n<nn)
            n = nn;
    }
    return n;
}

int justvalue(string s, int b, int l)
{
    int n = 0;
    int bb = 1;
    for(int i = l-1;i>=0;i--){
        if(s[i] >= 'A')
            n+= (s[i] - 'A' + 10) * bb;
        else
            n += (s[i] - '0') * bb;
        bb *= b;
    }
    return n;
}

int32_t main()
{
    string s,ss;
    while(cin >> s >> ss){
        int l = s.size(), ll = ss.size();
        int b = base(s) + 1;
        int bb = base(ss) + 1;

        bool ok = false;
        for(int i=b;i<=36;i++){
            for(int j = bb;j<=36;j++){
                if(justvalue(s,i,l) == justvalue(ss,j,ll)){
                    cout << s << " (base " << i << ") = " << ss  << " (base " << j << ")\n";
                    ok = true;
                    break;
                }
            }
            if(ok)
                break;
        }
        if(!ok)
            cout << s << " is not equal to " << ss << " in any base 2..36\n";
    }
    return 0;
}
