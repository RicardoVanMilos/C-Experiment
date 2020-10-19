/* 实验2-1改错题程序：合数判断器*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    int i, x, k,flag;
    printf("本程序判断合数，请输入大于1的整数，以Ctrl+Z结束\n");
    while (scanf("%d", &x) != EOF)
    {
        flag = 0;
        for (i = 2, k = floor(sqrt(x)); i <= k; i++)
            if ((x % i) == 0)
            {
                flag = 1;
                break;
            }
        if (x == 1)
        {
            printf("%d is neither prime nor non-prime\n", x);
            continue;
        }
        if (x == 2)
        {
            printf("%d is a prime number\n", x);
            continue;
        }
        if (flag == 1)
            printf("%d is not a prime number\n", x);
        else
            printf("%d is a prime number\n", x);
    }
    return 0;
}
