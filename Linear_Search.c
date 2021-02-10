#include <stdio.h>
int main()
{
    int arr[50], i, n, loc, search, flag = 0;
    printf("Enter the no of elements: ");
    scanf("%d", &n);
    for (i = 0; i <= n - 1; i++)
    {
        printf("Enter the number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to be searched: ");
    scanf("%d", &search);
    for (i = 0; i <= n - 1; i++)
    {
        if (arr[i] == search)
        {
            flag = 1;
            loc = i;
            break;
        }
    }
    if (flag == 1)
        printf("The number %d is found at position %d", search, loc + 1);
    else
        printf("The number is not found !");
    return 0;
}