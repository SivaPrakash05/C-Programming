#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
            if (j == 10)
                printf("\n");
        }
    }
    return 0;
}
