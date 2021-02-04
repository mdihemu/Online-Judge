#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     pb          push_back
#define     mp          make_pair
#define     all(v)      v.begin(), v.end()
#define     IN          freopen("input.txt",'r',stdin)

const int INF = 1e9+5;
const int N = 65600;

int32_t main()
{
    IOS;
    int n;
    cin >> n;
    vector < pair <int, int> > v;
    int nn = pow(2,n);
    for(int i=1;i<=nn;i++){
        int x;
        cin >> x;
        v.push_back({x,i});
    }


    for(int k=1;k<n;k++){
        vector < pair< int, int> > vv;
        for(int i=0;i<v.size();i+=2){
            if(v[i].first > v[i+1].first)
                vv.push_back({v[i].first, v[i].second});
            else
                vv.push_back({v[i+1].first, v[i+1].second});
        }
        v = vv;
    }

    int prev = 0;
    if(v[0].first > v[1].first)
        prev = v[1].second;
    else
        prev = v[0].second;
    cout << prev << endl;
    return 0;
}
