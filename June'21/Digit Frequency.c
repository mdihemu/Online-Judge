#include<stdio.h>
#include<string.h>

int main()
{
    char s[1005];
    scanf("%s", s);

    int cnt[15] = {0};
    for(int i=0;i<strlen(s);i++){
        int a = (s[i] - '0');
        if(a>=0 && a<10){
            cnt[a]++;
        }
    }

    for(int i=0;i<10;i++)
        printf("%d ", cnt[i]);
    printf("\n");
}
