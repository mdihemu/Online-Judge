#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    ll sum = 0;
    n++;
    while(n--){
        sum += n*3;
    }
    cout << sum << endl;
}
