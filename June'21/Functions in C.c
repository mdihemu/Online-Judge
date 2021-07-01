#include<stdio.h>

int greatest(int a, int b, int c, int d)
{
    if(b>a)
        a = b;
    if(c>a)
        a = c;
    if(d>a)
        a = d;
    return a;
}

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int big = greatest(a, b, c, d);
    printf("%d\n", big);
}
