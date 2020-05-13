#include<bits\stdc++.h>
using namespace std;

void binary(int n)
{
    int binaryNum[32];

    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
}

int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;
        int i = 0,binary[32],count=0,num = 0;
        while (n > 0) {
            binary[i] = n % 2;
            n = n / 2;
            i++;
        }
        for (int j = i - 1; j >= 0; j--)
            if(binary[j] == 1)
                count++;
        for (int j = 1; j<=count ; j++){
            num = num *10 + 1;
        }

        cout << convertBinaryToDecimal(num);
    }
    return 0;
}
