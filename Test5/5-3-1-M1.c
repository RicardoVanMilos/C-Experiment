#include <stdio.h>
#include <string.h>

int main(void)
{
    int n, i = 0, a[32];
    memset(a, 0, sizeof(a));//initialize the array
    scanf("%d", &n);
    if (n < 0)
    {
        n = -n;
        printf("-");
    } //jugde whether it is below zero
    if (n != 0)
    {
        while (n > 0)
        {
            a[i] = n % 2;
            n /= 2;
            i++;
        } //break the number into binary form
        for (int j = i - 1; j >= 0; j--)
        {
            printf("%d", a[j]);
        }
    }
    else
    {
        printf("0");
    }
}