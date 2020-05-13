#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int x = min(a,b);
    int y = max( (a-min(a,b))/2 , (b-min(a,b))/2 );
    cout << x << " " << y << endl;
    return 0;
}
