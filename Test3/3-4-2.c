#include <stdio.h>

int isPerfect(int n);

int main(void)
{
    for (int j = 1; j <= 10000; j++)
        isPerfect(j);
    return 0;
}

int isPerfect(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
        if (n % i == 0)
            sum += i;
    if (sum == n)
    {
        printf("%d=1",n);
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
                printf("+%d", i);
        }
        printf("\n");
    }
    else
        printf("%d is not a perfect number.\n",n);
    return 0;
}
