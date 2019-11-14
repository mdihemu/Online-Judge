#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcase;
    double n;

    cin >> testcase;

    while (testcase--)
    {
        cin >> n;
        cout << fixed << setprecision(0) << ceil(n/7.0) << endl;
    }
}
