#include<bits/stdc++.h>
using namespace std;
bool temp[2];

int arr[100005];
int main()
{
    int n;
    cin >> n;
    for (int i=0;i<n;i++)
    {
        cin >> arr[i];
        temp[arr[i]%2]=1;
    }
    if (temp[0] && temp[1])
    sort(arr,arr+n);
    for (int i=0;i<n;i++)
    cout << arr[i] << " ";
}
