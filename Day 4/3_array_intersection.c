#include <stdio.h>

int main()
{
    int n1, n2;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int arr1[n1];

    printf("Enter elements of first array: ");
    for (int i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int arr2[n2];

    printf("Enter elements of second array: ");
    for (int i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    printf("Intersection: ");

    for (int i = 0; i < n1; i++)
    {
        int found = 0;

        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                found = 1;
                break;
            }
        }

        // Print only once if the element is common
        if (found)
        {
            int alreadyPrinted = 0;

            for (int k = 0; k < i; k++)
            {
                if (arr1[k] == arr1[i])
                {
                    alreadyPrinted = 1;
                    break;
                }
            }

            if (!alreadyPrinted)
                printf("%d ", arr1[i]);
        }
    }

    return 0;
}
