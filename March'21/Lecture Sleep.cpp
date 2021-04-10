#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n], t[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<n;i++)
        cin >> t[i];

    int backup[n] = {0};
    int cnt = 0;
    for(int i=0;i<n;i++){
        if(t[i] == 1)
            cnt += a[i];
        else
            backup[i] = a[i];
    }
    for(int i=0;i<n;i++)
        backup[i] += backup[i-1];

    int mx = INT_MIN;
    for(int i=0;i<n-k+1;i++){
        int temp = backup[i+k-1] - backup[i-1];
        mx = max(mx, temp);
    }

    cout << cnt + mx << endl;
}
