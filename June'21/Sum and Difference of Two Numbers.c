#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    float fa, fb;
    scanf("%f %f", &fa, &fb);

    printf("%d %d\n", a+b, a-b);
    printf("%.1f %.1f\n", fa+fb, fa-fb);
}
