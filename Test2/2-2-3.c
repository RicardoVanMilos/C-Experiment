/* 实验2-1改错题程序：合数判断器*/
#include <stdio.h>
#include <math.h>

int isPrime(int a);
int isPurely3unPrime(int a);

int main(void)
{
    for (int i=100;i<=999;i++)
        if (isPurely3unPrime(i))
            printf("%d\n",i);
    return 0;
}

int isPrime(int a)
{
    if (a == 2)
        return 1;
    for (int i = 2, k = floor(sqrt(a)); i <= k; i++)
        if ((a % i) == 0)
            return 0;
    return 1;
}

int isPurely3unPrime(int a)
{
    if ((!isPrime(a)) && (!isPrime(a/10)) && (!isPrime(a/100)))
        return 1;
    else
        return 0;
}