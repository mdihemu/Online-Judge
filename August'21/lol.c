#include<stdio.h>

int main()
{
    int number, range;
    printf("Input Number: ");
    scanf("%d", &number);

    printf("Range: ");
    scanf("%d", &range);

    printf("\nTime Table:\n\n");
    ///for(initialization(যেখান থেকে শুরু হবে); condition(কখন লুপ তা ব্রেক করবে); increment/decrement)

//    for(int i=1;i<=range;i++){
//        printf("%d x %d = %d\n", number, i, number * i);
//    }

//    int i=1; ///initialization
//    while(i<=range){///condition
//        printf("%d x %d = %d\n", number, i, number * i);
//        i++;
//    }

    int i=1;
    do{
        printf("%d x %d = %d\n", number, i, number * i);
        i++;
    }while(i<=range);

    return 0;
}
