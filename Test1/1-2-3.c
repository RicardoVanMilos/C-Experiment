/* 实验1-2程序分析与修改题源程序 */
#include <stdio.h>
int main()
{
    int m, n, k, p, i, d;
    printf("input m, n \n");
    scanf("%d%d", &m, &n);
    if (m < n) /* 交换m和n */
    {
        int t;
        t = m;
        m = n;
        n = t;
    }
    k = 0;
    while (m % 2 == 0 && n % 2 == 0) /* m和n均为偶数 */
    {
        m >>= 1; /* 用2约简m和n */
        n >>= 1;
        k++;
    }
    p = 1;
    p <<= k; /* 求p=2k */
    while ((d = m - n) != n)
    {
        if (d > n)
            m = d;
        else
        {
            m = n , n = d;
        }
    }
    d *= p;
    printf("the greatest common divisor : %d", d == 0 ? 1 : d);
    return 0;
}
