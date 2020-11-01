#include<stdio.h>

int main()
{
    const int n = 10;
    int *p;
    p = &n;
    *p = 15;
    printf("%d\n",n);

    return 0;
}
