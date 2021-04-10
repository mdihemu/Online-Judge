#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, d;
    cin >> n >> d;
    string s;
    cin >> s;
    int cnt = 0;
    for(int i=0;i<n;){
        //cout << i << endl;
        int highest = i+d;
        int reach = i;
        bool ok = false;
        for(int j = highest;j>i;j--){
            if(s[j] == '1'){
                reach = j;
                ok = true;
                break;
            }
        }
        if(i==n-1 || highest>=n-1){
            cout << cnt+1 << endl;
            return 0;
        }
        if(!ok){
            cout << "-1\n";
            return 0;
        }
        ok = false;
        //cout << reach << endl;
        cnt++;
        i = reach;
    }
    cout << cnt << endl;
}
