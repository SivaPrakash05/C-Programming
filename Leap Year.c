//Program to Find the Given Year is leap year or not
#include <stdio.h>
int main()
{
    int year;
    printf("Enter the year to check if it is a leap year: ");
    scanf("%d", &year);

    // divisible by 4, 100 and 400
    if (year % 400 == 0)
        printf("%d is a leap year\n", year);

    // divisible by 100 and 4 and not divisible by 400
    else if (year % 100 == 0)
        printf("%d is not a leap year\n", year);

    // divisible only by 4 and not by 100
    else if (year % 4 == 0)
    {
        printf("%d is a leap year\n", year);
    }
    // not divisible by 4
    else
        printf("%d is not a leap year\n", year);
    return 0;
}