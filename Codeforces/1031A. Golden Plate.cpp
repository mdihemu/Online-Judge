#include<bits/stdc++.h>
using namespace std;

int main()
{
    int w,h,k;
    cin >> w >> h >> k;

    int ans = 0;
    for(int i=1;i<=k;i++){
        if(i>=2){
            w=w-4;
            h=h-4;
        }
        else
            w=w-2;
        ans = ans  + 2*w + 2*h;
    }
    cout << ans << endl;

    return 0;
}
