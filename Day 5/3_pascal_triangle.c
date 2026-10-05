#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int value = 1;

        // Spaces for centered triangle
        for (int j = 0; j < n - i - 1; j++)
            printf("   ");

        for (int j = 0; j <= i; j++)
        {
            printf("%d   ", value);

            value = value * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
