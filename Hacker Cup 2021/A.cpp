#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     IN          freopen("in.txt","r",stdin)
#define     OUT         freopen("output.txt","w",stdout);

const int MOD = 1e9+7;
const int INF = 2e5+5;
const int N = 205;

void solve();
int32_t main()
{
    IOS;
    IN;
    OUT;
    cout << fixed << setprecision(10);
    int _ = 1;
    //cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int lol;
    cin >> lol;
    for(int tt = 1;tt<=lol;tt++){
        cout << "Case #" << tt << ": ";

        string s;
        cin >> s;
        int n = s.size();
        int a[26] = {0};
        for(int i=0;i<n;i++){
            a[s[i] - 'A']++;
        }
        vector<int>v, c;
        for(int i=0;i<26;i++){
            if(i==0 || i==4 || i==8 || i==14 || i==20){
                v.push_back(a[i]);
            }
            else{
                c.push_back(a[i]);
            }
        }
        sort(v.rbegin(), v.rend());
        sort(c.rbegin(), c.rend());

        ///method-1
        vector<int>vv = v;
        vv[0] = 0;
        int cnt = 0;
        for(int i:vv){
            cnt += i;
        }
        cnt *= 2;
        for(int i:c)
            cnt += i;

        ///method-2
        vector<int>vvv = c;
        vvv[0] = 0;
        int cntt = 0;
        for(int i:vvv){
            cntt += i;
        }
        cntt *= 2;
        for(int i:v)
            cntt += i;

        cout << min(cnt, cntt) << endl;
    }
}

///Must see the constraints range
///Calculate the Time
