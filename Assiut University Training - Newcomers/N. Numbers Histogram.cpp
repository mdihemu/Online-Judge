#include<bits\stdc++.h>
using namespace std;

int main()
{
    char s;
    long long int n,x;
    cin >> s ;
    cin >> n;
    while(n--){
        cin >> x;
        for(int i=1;i<=x;i++){
            cout << s ;
        }
        cout << endl;
    }

    return 0;
}
