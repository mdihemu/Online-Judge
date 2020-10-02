#include<stdio.h>

int main()
{
    printf("Enter five strings: \n");
    for(int i=0;i<5;i++){
        int j=0;
        char *ch = (char *) malloc(sizeof(char) * 1024);
        while(1){
            scanf("%c",&ch[j]);
            if(ch[j] == '\n')
                break;
            else
                j++;
        }
        int n = j;
        ch[j] = '\0';
        j=0;
        while(ch[j]!='\0'){
            printf("%c",ch[j]);
            j++;
        }
        printf(" %d\n",n);
    }
    return 0;
}
/*
int main()
{
    int prev;
    scanf("%d",&prev);

    while(1){
        char ch[10];
        scanf("%s",&ch);
        if(ch[0] == '.')
            break;
        int cur = atoi(ch);
        if(cur>prev)
            printf("Greater\n");
        else if(cur<prev)
            printf("Less\n");
        else if(cur==prev)
            printf("Equal");
        prev = cur;
    }
    return 0;
}
/*
double final(double x, double n)
{
    double result = 1;
    for(int i=2;i<=n;i++){
        if(i%2==1){
            result += (i/pow(x,i));
        }
    }
    return result;
}
int main()
{
    double x,n;
    printf("Enter x and n: ");
    scanf("%lf %lf",&x,&n);
    double result = final(x,n);
    printf("Result: %.4lf",result);
}
/*
int main()
{
    int n=154;
    int size;
    printf("Enter the size of arrays: ");
    scanf("%d",&size);
    int a[size];
    printf("Enter values: ");
    for(int i=0;i<size;i++){
        scanf("%d",&a[i]);
    }
    int mx=0;
    for(int i=0;i<size;i++){
        if(n%a[i]==0){
            if(a[i]==154)
                continue;
            if(a[i]>mx)
                mx = a[i];
        }
    }
    printf("Maximum Divisor: %d\n",mx);
}
/*
int main()
{
    int i,j=2,k=1;
    for(i=0;i<=4;i++){
        printf("%d",i+j+k);
    }
}
/*
int main()
{
    int i,j;
    for(i=1;i<=3;i++){
        for(j=i;j<=3;j++){
            printf("*");
        }
        printf("\n");
    }
    printf("\n%d",i);
}
/*
int main()
{
    int a=9,i;
    for(i=0;i<=10;i++){
        if(i%3==0){
            printf("%d",i);}
        else{
            printf("%d",i);}
    }
}
*/
