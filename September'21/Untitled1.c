#include<stdio.h>

int main()
{
    printf("Input the number of elements to be stored in the array: ");
    int n;
    scanf("%d", &n);
    int a[n];
    int sum = 0;
    for(int i=0;i<n;i++){
        printf("element - %d: ", i);
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("Sum of all elements stored in the array is: %d\n", sum);

    return 0;
}
