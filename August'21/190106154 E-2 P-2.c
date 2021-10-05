#include<stdio.h>

int main()
{
    int n;
    printf("n: ");
    scanf("%d", &n);
    float sum = 0.0;
    for(int i=1;i<=n;i++){
        sum = sum + (1 / (i * i * 1.0));
    }
    printf("Sum: %.2f\n", sum);

    return 0;
}
