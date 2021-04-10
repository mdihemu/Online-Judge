#include<bits/stdc++.h>
using namespace std;

#define     IOS         ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     IN          freopen("input.txt",'r',stdin)

const int INF = 1e9+5;
const int N = 205;
string s;
int n;

bool check(int mid)
{
    int i, j;
    for(i=0;i<26;i++){
        char ch = 'a' + i;
        int cnt = 0, temp = 0;
        for(j=0;j<n;j++){
            if(s[j] == ch)
                cnt++;
            if(j-temp+1 >mid){
                if(s[temp] == ch)
                    cnt--;
                temp++;
            }
            if(j-temp+1 == mid && cnt==0){
                break;
            }
        }
        if(j==n)
            return true;
    }
    return false;
}

void solve();
int32_t main()
{
    IOS;
    cout << fixed << setprecision(10);
    int _ = 1;
    //cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    //string s;
    cin >> s;
    n = s.size();

    if(n==1){
        cout << 1 << endl;
        return;
    }

    bool ok = true;
    for(int i=1;i<n;i++){
        if(s[i] != s[i-1]){
            ok = false;
            break;
        }
    }
    if(ok){
        cout << 1 << endl;
        return;
    }

    int l = 1, r = n, ans = 0;
    while(l<=r){
        int mid = (l+r)/2;
        if(check(mid)){
            ans = mid;
            r = mid -1;
        }
        else
            l = mid + 1;
    }
    cout << ans << endl;
}

///Must see the constraints range
///Calculate the Time
