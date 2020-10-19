#include <stdio.h>

int main(void)
{
    int sum;
    for (int i = 100; i <= 999; i++)
    {
        sum = i * i;
        if ((sum % 1000) == i)
            printf("%d\n", i);
    }
    return 0;
}