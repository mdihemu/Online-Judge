#include<stdio.h>

int main()
{
    int n, a[1005];
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
    int sum = 0;
    for(int i=0;i<n;i++)
        sum += a[i];
    printf("%d\n", sum);
}
