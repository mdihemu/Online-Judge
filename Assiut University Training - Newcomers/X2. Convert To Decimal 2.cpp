#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll cnt = __builtin_popcountll(n);
        if(cnt==0)
        {
            cout << 0 << endl;
            continue;
        }
        string b(cnt, '1');
        ll dec = stoi(b, nullptr, 2);
        cout << dec << endl;
    }
    return 0;
}
