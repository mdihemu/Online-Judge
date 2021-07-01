#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int m = 2*n-1;

    int a[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            a[i][j] = 0;
        }
    }
    int low = 0, high = m-1;
    int lol = 0;
    for(int ii=n;ii>0;ii--){

        for(int i=lol;i<m;i++){
            for(int j=lol;j<m;j++){
                if(((i==low || i==high || j==low || j==high))){
                    a[i][j] = ii;
                }
            }
        }
        low++, high--;
        m--;
        lol++;
        //m-=2;
    }
    m = 2*n-1;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
