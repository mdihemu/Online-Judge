#include<stdio.h>

int main()
{
    int id, salary;
    char name[100];

    scanf("%d %s %d", &id, &name, &salary);

    int tax = 0;
    if(salary>=9000){
        tax = salary * 0.4;
    }
    else if(salary>=7500){
        tax = salary * 0.3;
    }
    else if(salary>=6450){
        tax = salary * 0.35;
    }
    else{
        tax = salary * 0.20;
    }

    printf("Employee IDNo.: %d\n", id);
    printf("Employee Name: %s\n", name);
    printf("Salary: %d\n", salary);
    printf("Income Tax: %d\n", tax);

    if(tax > 4000){
        printf("Excess Tax\n");
    }
    else{
        printf("Tax is in Limit\n");
    }

    return 0;
}
