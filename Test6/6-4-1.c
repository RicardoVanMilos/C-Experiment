#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    long x;
    scanf("%d", &x);
    unsigned char *p = (unsigned char *)&x;
    unsigned char low_four, high_four;
    high_four = (*p & 0xf0) >> 4;
    low_four = *p & 0x0f;
    printf("%d %d\n", high_four, low_four);
    p++;
    high_four = (*p & 0xf0) >> 4;
    low_four = *p & 0x0f;
    printf("%d %d\n", high_four, low_four);
    p++;
    high_four = (*p & 0xf0) >> 4;
    low_four = *p & 0x0f;
    printf("%d %d\n", high_four, low_four);
    p++;
    high_four = (*p & 0xf0) >> 4;
    low_four = *p & 0x0f;
    printf("%d %d\n", high_four, low_four);
}