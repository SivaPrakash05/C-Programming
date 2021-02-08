#include <stdio.h>

int main()
{
    int first, second, third, *p, *q, *r, sum;

    // Getting user input
    printf("Enter the Number 1: ");
    scanf("%d", &first);
    printf("Enter the Number 2: ");
    scanf("%d", &second);
    printf("Enter the Number 3: ");
    scanf("%d", &third);

    // Assign the user input to the pointers using address operator
    p = &first;
    q = &second;
    r = &third;

    // Adding the values
    sum = *p + *q + *r;
    printf("The sum of the entered numbers is: %d", sum);
    return 0;
}