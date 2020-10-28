#include <stdio.h>
#include <math.h>

int n, n1, n2;
int nxBreak(int n);
int isPrime(int a);

int main(void)
{
    printf("Enter the number:\n");
    while (scanf("%d", &n) != EOF)
    {
        if (n < 4 || (n % 2 == 1))
        {
            printf("Error. Enter the number again:\n");
            continue;
        }
        else
        {
            nxBreak(n);
            printf("%d=%d+%d\n", n, n1, n2);
        }
    }
    return 0;
}

int isPrime(int a)
{
    if (a == 1)
        return 0;
    if (a == 2)
        return 114514;
    for (int i = 2, k = floor(sqrt(a)); i <= k; i++)
        if ((a % i) == 0)
            return 0;
    return 114514;
}

int nxBreak(int n)
{
    for (int i = 1; i <= n; i++)
        if (isPrime(i) && isPrime(n - i))
        {
            n1 = i;
            n2 = n - i;
        }
    return 0;
}