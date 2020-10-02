#include<bits/stdc++.h>
using namespace std;

using ll = long long;
#define endl '\n'
#define pb push_back
//#define s 10010

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n ,s;
    cin >> n >> s;
    if(2*n <= s){
        cout << "YES\n";
        for(int i=0;i<n-1;i++){
            cout << 2 << " ";
            s-=2;
        }
        cout << s << endl << 1 << endl;
    }
    else
        cout << "NO\n";
}

