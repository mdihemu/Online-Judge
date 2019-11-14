#include<bits/stdc++.h>
using namespace std;

int main()
{
    int numberofqueries;
    cin >> numberofqueries;
    int numberofmatches;

    for(int i=0;i<numberofqueries;i++){
        cin >> numberofmatches;

        if(numberofmatches==2)
            cout << 2 << endl;
        else if(numberofmatches%2==0)
            cout << 0 << endl;
        else
            cout << 1 << endl;
    }
}
