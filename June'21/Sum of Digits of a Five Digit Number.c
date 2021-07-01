#include<stdio.h>
#include<string.h>

int main()
{
    int sum = 0;
    for(int i=0;i<5;i++){
        char ch;
        scanf("%ch", &ch);
        sum += (ch - '0');
    }
    printf("%d\n", sum);
}
