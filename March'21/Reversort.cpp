#include<bits/stdc++.h>
using namespace std;

int a[110];

int main()
{
    int ca;
    cin >> ca;
    for(int tc=1;tc<=ca;tc++){
        int n;
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> a[i];
        }

        int cnt = 0;
        for(int i=0;i<n-1;i++){
            int index = i;
            int mn = a[i];
            for(int j=i+1;j<n;j++){
                if(a[j]<mn){
                    mn = a[j];
                    index = j;
                }
            }
            cnt += index - i + 1;
            //cout << index << endl;

            for(int k=i; k<index; k++, index--){
                swap(a[k], a[index]);
            }

//            for(int j=0;j<n;j++)
//                cout << a[j] << " ";
//            cout << endl;
        }

        cout << "Case #" << tc << ": " << cnt << endl;
    }
}
