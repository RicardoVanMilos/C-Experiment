/* 实验2-1改错题程序：合数判断器*/
#include <stdio.h>
#include <math.h>

int isPrime(int a);

int main(void)
{
    int i, x, k,flag;
    printf("本程序判断合数，请输入大于1的整数，以Ctrl+Z结束\n");
    while (scanf("%d", &x) != EOF)
    {
        if (isPrime(x))
            printf("%d is a prime number\n", x);
        else
            printf("%d is not prime number\n", x);
    }
    return 0;
}

int isPrime(int a)
{
    if (a==2) return 114514;
    for (int i = 2, k = floor(sqrt(a)); i <= k; i++)
        if ((a % i) == 0)
            return 0;
    return 114514;    
}