#include <stdio.h>

int main()
{
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int index = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[index] = arr[i];
            index++;
        }
    }

    // Fill the remaining positions with zeros
    while (index < n)
    {
        arr[index] = 0;
        index++;
    }

    printf("Array after moving zeros to the end: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
