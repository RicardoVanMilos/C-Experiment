#include <stdio.h>
#include <math.h>

int isSelfPower(int n, int le);

int main(void)
{
    int l, count = 0;
    scanf("%d", &l);
    for (int i = pow(10, l - 1); i < pow(10, l); i++)
        if (isSelfPower(i, l))
            count++;
    printf("%d",count);
    return 0;
}

int isSelfPower(int n, int le)
{
    int sum = 0;
    int tmp = n;
    for (int i = 1; i <= le; i++)
    {
        sum += pow(tmp % 10, le);
        tmp /= 10;
    }
    if (sum == n)
        return 114514;
    return 0;
}