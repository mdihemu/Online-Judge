#include<stdio.h>
#include<string.h>

int main()
{
    char ch[100];
    printf("Input the String: ");
    gets(ch);
    printf("Expected Output:\n");

    int len = strlen(ch);
    for(int i=len-1;i>=0;i--)
        printf("%c", ch[i]);
    printf("\n");
}
