#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

int32_t main()
{
    int a,b;
    string s;
    while(cin >> s >> a >> b){
        int n = 0;
        int po = 1;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i] >= 'A')
                n += (s[i] - 'A' + 10) * po;
            else
                n += (s[i] - '0') * po;
            po *= a;
        }

        int arr[50] = {};
        int ii = 0;
        while(n>0){
            arr[ii] = n%b;
            n /= b;
            ii++;
        }
        ii--;
        if(ii>=7){
            printf("  ERROR\n");
            continue;
        }
        if(ii<0)
            ii = 0;

        int lol = 6-ii;
        while(lol--)
            printf(" ");
        for(int i=ii;i>=0;i--){
            char ch;
            if(arr[i] >= 10)
                ch = arr[i] + 'A' - 10;
            else
                ch = arr[i] + '0';
            printf("%c",ch);
        }
        cout << endl;
    }
    return 0;
}
