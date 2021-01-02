#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);

    int c = 4;
    c = (n>0 && n<100) ? 1 : c;
    c = (n>=100 && n%5==0) ? 2 : c;
    c = (n>=100 && n%5!=0) ? 3 : c;

    printf("Case %d\n",c);
    return 0;
}
