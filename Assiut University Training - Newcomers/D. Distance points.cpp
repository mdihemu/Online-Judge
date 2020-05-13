#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main()
{
    ll x1,x2,y1,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    x1 = x2 - x1;
    x1 = x1 * x1;

    y1 = y2- y1;
    y1 = y1 * y1;

    x1 = x1 + y1;
    double sum = sqrt(x1);
    cout << fixed << setprecision(9) << sum << endl;
}
