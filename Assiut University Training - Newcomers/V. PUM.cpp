#include<bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i<=n ; i++){
        int j = (i-1)*4 + 1;
        cout << j << " " << j+1 << " " << j+2 << " PUM\n";
    }
}
