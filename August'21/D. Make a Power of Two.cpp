#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)

const int MOD = 1e9+7;
const int INF = 2e5+5;
const int N = 205;

vector<string>v;

void solve();
int32_t main()
{
    IOS;

    int x = 1;
    string g = to_string(x);
        v.push_back(g);
    for(int i=0;;i++){
        x *= 2;
        string g = to_string(x);
        v.push_back(g);
        if(x>1000000000)
            break;
    }
    //cout << v.size() << endl;
    cout << fixed << setprecision(10);
    int _ = 1;
    cin >> _;
    while(_--) solve();
    return 0;
}

int lcs(string X, string Y, int m, int n)
{
    if (m == 0 || n == 0)
        return 0;
    if (X[m - 1] == Y[n - 1])
        return 1 + lcs(X, Y, m - 1, n - 1);
    else
        return max(lcs(X, Y, m, n - 1), lcs(X, Y, m - 1, n));
}

void solve()
{
    int n;
    cin >> n;
    vector<int>cnt;
    string s = to_string(n);
    for(int i=0;i<v.size();i++){
        string x = v[i];
        int m = s.size();
        int mm = x.size();
        int lol = lcs(s,x,m,mm);

        int temp = 0;
        if(lol == m){
            temp = 0;
        }
        else if(lol == m){
            temp = m - lol;
        }
        else{
            int t=0;
            int loll = 0;
            for(int j=0;j<m && t<mm;j++){
                if(x[t] == s[j]){
                    t++;
                }
            }
            temp =
        }
        cnt.push_back(temp);
    }
    int mn = *min_element(cnt.begin(), cnt.end());
    cout << mn << endl;
}

///Must see the constraints range
///Calculate the Time
