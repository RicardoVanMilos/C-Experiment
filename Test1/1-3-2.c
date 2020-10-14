#include<stdio.h>

int main()
{
    unsigned short x, m, n;
    scanf("%hu%hu%hu",&x,&m,&n);
    if (m > 15)
    {
        puts("m out of range!");
        return 1;
    }

    if (n < 1 || n > 16 - m)
    {
        puts("n out of range!");
        return 1;
    }

    x &= (0xFFFF << m);
    x <<= 16 - n - m;
    printf("%X", x);
    return 0;
}