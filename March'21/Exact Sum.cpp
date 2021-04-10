#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(cin >> n){
        vector<int>a(n);
        for(int i=0;i<n;i++)
            cin >> a[i];
        int m;
        cin >> m;
        sort(a.begin(), a.end());
        cout << "Peter should buy books whose prices are ";

        int left = 0, right = n-1;
        int mn, mx;
        while(left<right){
            if(a[left] + a[right] == m){
                mn = left;
                mx = right;
                left++;
                right--;
                //break;
            }
            else if(a[left] + a[right] < m)
                left++;
            else
                right--;
        }
        cout << a[mn] << " and " << a[mx]<< "." << endl << endl;
    }
}
