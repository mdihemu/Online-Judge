#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int32_t main()
{
    IOS;
    string s;
    cin >> s;
    int n = s.size();
    int num=0,star=0;
    for(int i=0;i<n;i++){
        if(s[i]>'1' && s[i]<='9')
            num++;
        if(s[i] == '*')
            star++;
    }
    for(int i=0;i<n;i++){
        if(s[i]>='1' && s[i]<='9'){
            for(int j=n;j>=0;j--){
                if(s[j] == '0'){
                    s[j] = s[i];
                    s[i] = ' ';
                    break;
                }
            }
        }
        if(s[i] == '*'){
            swap(s[i-1],s[i-2]);
        }
    }
    //cout << s << endl;

    string p ="";
    for(int i=0;i<n;i++){
        if(s[i]!=' ' && s[i] != '*')
            p+=s[i];
    }
    cout << p << endl;
    return 0;
}

///51Pa*0Lp*0e
