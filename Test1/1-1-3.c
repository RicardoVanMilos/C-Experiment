#include <stdio.h>

int main(void)
{
    unsigned short p, k;
    int newint;

    /* 任务3 */
    k = 0xa1b2, p = 0x8432;
    newint = p & 0xff00 | k >> 8;
    printf("new int = %#x\n\n", newint);
    return 0;
}