#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char ch;
    char s[20], str[500];
    scanf("%c", &ch);
    scanf("%s", &s);
    scanf("\n");
    fgets(str, sizeof(str), stdin);

    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", str);
}
