#include<stdio.h>

int main()
{
    int id, unit;
    char name[100];

    ///নাম হচ্ছে স্ট্রিং তাই এইটি ক্যারেক্টার অ্যারেতে নিয়েছি
    scanf("%d %s %d", &id, &name, &unit);

    float price = 0, total = 0;

    if(unit<200){
        price = 1.20;
    }
    else if(unit<400){
        price = 1.50;
    }
    else if(unit<600){
        price = 1.80;
    }
    else{
        price = 2.00;
    }

    total = unit * price;

    printf("Customer ID No.: %d\n", id);
    printf("Customer Name: %s", name);
    printf("Unit Consumed: %d\n", unit);
    printf("Amount Charger @ %.5f per unit: %.5f\n", price, total);
}
*/

/*
#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    if(n){
        int x;
        scanf("%d", &x);
        printf("%d\n", x*10);
    }
    else{
        int x;
        scanf("%d", &x);
        printf("%d\n", x*100);
    }
}

*/
/*
#include<stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

}
*/
