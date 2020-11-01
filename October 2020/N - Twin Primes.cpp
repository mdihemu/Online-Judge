#include<bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define aa 20000000

bool se[aa+5];

void anything()
{
    for(int i=4; i<=aa; i+=2)
        se[i] = false;
    for(int i=3;i<=sqrt(aa);i+=2){
        if(se[i] == true){
            for(int j = i*i;j<=sqrt(aa);j+=i+i)
                se[j] = false;
        }
    }
}

int twin[aa+5];
void ftwin()
{
    int j = 1;
    for(int i=3;i<=aa;i++){
        if(se[i] && se[i+2]){
            twin[j++] = i;
        }
    }
}
int32_t main()
{
    anything();
    ftwin();
    int n;
    while(cin >> n){
        printf("(%d, %d)\n",twin[n],twin[n]+2);
    }
    return 0;
}
