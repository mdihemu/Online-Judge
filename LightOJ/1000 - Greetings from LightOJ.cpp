#include<bits/stdc++.h>
using namespace std;

int main()
{
    int testcase;
    cin >> testcase;
    int a,b;
    for(int i=1;i<=testcase;i++)
    {
        cin >> a;
        cin >> b;

        a=a+b;
        cout << "Case " << i << ": " << a << endl;
    }
}
