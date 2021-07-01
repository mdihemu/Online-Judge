#include<stdio.h>

int main()
{
    int n, a[1005];
    scanf("%d", &n);
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);

    int m = n-1;
    for(int i=0;i<n/2;i++){
        int temp = a[i];
        a[i] = a[m];
        a[m] = temp;
        m--;
    }

    for(int i=0;i<n;i++)
        printf("%d ", a[i]);
    printf("\n");
}
