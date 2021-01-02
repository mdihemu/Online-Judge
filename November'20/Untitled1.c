#include <stdio.h>
#include <time.h>

int main()
{
    int m,D,Y;
    struct tm *birth;
    time_t BirthDate,PresentDate;

    printf("Enter your birth month (1-12): ");
    scanf("%d",&m);
    printf("Enter your birth day: ");
    scanf("%d",&D);
    printf("Enter your birth year: ");
    scanf("%d",&Y);

    time(&PresentDate);
    birth = localtime(&PresentDate);
    birth->tm_mon = m-1;
    birth->tm_mday = D;
    birth->tm_year = Y-1900;

    BirthDate = mktime(birth);

    printf("You were born on %d/%d/%d\n",m,D,Y);
    printf("That's Unix Epoch value: %ld\n",BirthDate);

    return(0);
}
