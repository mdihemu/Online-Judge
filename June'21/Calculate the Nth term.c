#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[30];
    for(int i=0;i<3;i++){
        int x;
        scanf("%d", &x);
        a[i] = x;
    }
    for(int i=3;i<22;i++){
        a[i] = a[i-1] + a[i-2] + a[i-3];
    }
    printf("%d\n", a[n-1]);
}
