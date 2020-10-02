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
        string a;
        cin >> a;
        int n = a.length();
        string b = "101",c = "010";
        int cnt=0;
        if(n<3)
            cnt = 0;
        else if(n==3){
            if((a.compare(b)) == 0)
                cnt = 1;
            else if((a.compare(c)) == 0)
                cnt = 1;
        }
        else{
            for(int i=0;i<n;i++){
                char ch = s.at(i);
                char cha = s.at(i+1);
                if(ch=='1' && cha=='1')
                    s[i] = '0';
                else if(s[i]=='1' && s[i+1]=='0'){
                    s[i] = '0';
                    break;
                }
            }
        }
    }
}

