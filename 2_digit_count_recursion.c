#include <stdio.h>

int countDigit(int n, int digit)
{
    if (n == 0)
        return 0;

    if (n % 10 == digit)
        return 1 + countDigit(n / 10, digit);

    return countDigit(n / 10, digit);
}

int main()
{
    int n, digit;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    printf("Enter the digit to count: ");
    scanf("%d", &digit);

    printf("The digit %d occurs %d time(s).\n",
           digit, countDigit(n, digit));

    return 0;
}
