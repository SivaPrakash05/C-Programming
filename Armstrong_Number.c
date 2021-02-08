//Program to check the given number is Armstrong Number or not
#include <stdio.h>
int main()
{
    int num, rem, sum = 0, temp;
    printf("Enter the number : ");
    scanf("%d", &num);
    temp = num; //Store the number to the temp variable for the later use

    while (num > 0)
    {
        rem = num % 10;
        sum = sum + (rem * rem * rem);
        num = num / 10;
    }

    if (temp == sum)
        printf("The Given number %d is armstrong number ", temp);
    else
        printf("The Given number %d is not armstrong number", temp);
    return 0;
}