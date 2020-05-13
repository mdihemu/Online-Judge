#include<bits\stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    double a[n],pos=0,neg=0,even=0,odd=0;
    for(int i = 1;i<=n;i++){
        cin >> a[i];
        int x = a[i];

        if(x%2==0){
            even++;
            if(x>0)
                pos++;
            else if(x<0)
                neg++;
        }
        else{
            odd++;
            if(x>0)
                pos++;
            else if(x<0)
                neg++;
        }
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;

    return 0;
}
