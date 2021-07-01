#include<stdio.h>
#include<string.h>

int main()
{
    char s[1005];
    gets(s);
    for(int i=0;i<strlen(s);i++){
        char ch = s[i];
        if(ch == ' ')
            printf("\n");
        else
            printf("%c", ch);
    }
}
