#include<stdio.h>

void update(int *a, int *b)
{
    int aa = *a + *b;

    *b = abs(*a - *b);
    *a = aa;
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d\n", a, b);
}
