#include<bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    int a[q],b[q],n[q],s[q];
    for(int i=0;i<q;i++){
        cin >> a[i] >> b[i] >> n[i] >> s[i];
        if( (a[i]*n[i]) > s[i])
            cout << "NO" << endl;
        else if( s[i]- (a[i]*n[i])  <=b[i] )
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}
