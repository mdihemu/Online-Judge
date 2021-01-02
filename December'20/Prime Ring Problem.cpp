#include<bits/stdc++.h>
using namespace std;

#define     int         long long
#define     endl        "\n"
#define     PI          acos(-1.0)
#define     pb          push_back
#define     mp          make_pair
#define     all(v)      v.begin(), v.end()
#define     IN          freopen("input.txt",'r',stdin)

const int INF = 1e9+5;
const int N = 20;

int n, a[N];
bool ok[N];

bool isprime(int n)
{
    if(n<=1)return false;   if(n==2)return true;   if(n>2 && n%2==0)return false;
    int div = sqrt(n);    for(int i=3;i<=div;i+=2)if(n%i==0)return false;
    return true;
}

void backtracking(int x)
{
    if(x == n-1 && isprime(a[n-1] + a[n])){
        for(int i=0;i<n;i++){
            if(i==n-1)
                cout << a[i];
            else
                cout << a[i] << " ";
        }
        cout << endl;
        return;
    }
    for(int i=2;i<=n;i++){
        if(!ok[i] && isprime(a[x] + i)){
            ok[i] = true;
            a[x+1] = i;
            backtracking(x+1);
            ok[i] = false;
        }
    }
}

int32_t main()
{
    int t=0;
    while(cin >> n){
        t++;
        if(t>1)
            cout << endl;
        a[0] = a[n] = 1;
        cout << "Case " << t << ":\n";
        backtracking(0);
    }
    return 0;
}
