/*实验3-1改错题程序：计算s=1!+2!+3!+…+n!*/
#include <stdio.h>

long long sum_fac(int n);

int main(void)
{
    int k;
    long long sum;
    for (k = 1; k <= 20; k++)
    {
        sum = sum_fac(k);
        printf("k=%d\tthe sum is %lld\n", k, sum);
    }
    return 0;
}

long long sum_fac(int n)
{
    long long s = 0 , fac = 1;
    int i;
    for (i = 1; i <= n; i++)
    {
        fac *= i;
        s += fac;
    }
    return s;
}
