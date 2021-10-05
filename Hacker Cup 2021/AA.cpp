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
void solvetoo();

int32_t main()
{
    IOS;

    ///For input file
    //freopen("in.txt","r",stdin);

    ///Show the output
    //freopen("output.txt","w",stdout);

    cout << fixed << setprecision(10);
    int _ = 1;
    //cin >> _;
    while(_--) solve();
    return 0;
}

void solve()
{
    int numberoftestcase;
    cin >> numberoftestcase;
    for(int testcase = 1;testcase<=numberoftestcase;testcase++){
        cout << "Case #" << testcase << ": ";

        ///Main problem start
        solvetoo();
    }
}

void solvetoo()
{
    int n, m;
    cin >> n >> m;
    int s[m];
    for(int i=0;i<m;i++)
        cin >> s[i];
    int p[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> p[i][j];
        }
    }

    //which value is in all the row
    int model = 0;
    for(int ii=0;ii<m;ii++){
        int tor = 0;
        for(int i=0;i<n;i++){
            bool ok = false;
            for(int j=0;j<m;j++){
                if(p[i][j] == s[ii]){
                    p[i][j] = 0;
                    tor++;
                    ok = true;
                    break;
                }
            }
            if(!ok){
                break;
            }
        }
        if(tor == n){
            model++;
        }
    }

    int cnt = 0;
    //double the first line model
    for(int i=0;i<m;i++){
        if(p[0][i]>0){
            cnt += 2;
        }
    }

    //check the previous line
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(p[i][j] > 0){
                for(int ii=i+1;ii<n;ii++){
                    bool ok = false;
                    for(int jj=0;jj<m;jj++){
                        if(p[ii][jj] == p[i][j]){
                            p[ii][jj] = 0;
                            ok = true;
                            break;
                        }
                    }
                    if(!ok){
                        break;
                    }
                }
            }
        }
    }

    int nott = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(p[i][j] != 0){
                nott++;
            }
        }
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << p[i][j] << " ";
        }
        cout << endl;
    }
    cout << nott << endl;
    cout << nott - m + model<< endl;

}

///Must see the constraints range
///Calculate the Time
