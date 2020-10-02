#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y=3;
    for(int i=1;pow(i,y)<=100;i++){
        x = pow(i,y);
        printf("Output %d = %d\n",i,x);
    }
}
