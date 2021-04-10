#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int loop = 1;loop <=t; loop++){
        int n, b;
        cin >> n >> b;
        int a[n];
        for(int i=0;i<n;i++)
            cin >> a[i];
        int cnt = 0;
        sort(a, a+n);
        for(int i=0;i<n;i++){
            if(a[i] <= b){
                cnt++;
                b -= a[i];
            }
            else
                break;
        }

        cout << "Case #" << loop << ": " << cnt << endl;
    }
}
