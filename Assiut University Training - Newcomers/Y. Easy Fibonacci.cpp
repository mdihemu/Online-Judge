#include<bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int first = 0;
    int second = 1;
    int sum = 0;
    sum = first + second;
    while(n--){
        cout << first << " ";
        first = second ;
        second = sum;
        sum = first + second;
    }
    cout << endl;

    return 0;
}
