#include <stdio.h>

int main(void)
{
    short p, k;
    double c, r, s,f;

    /* 任务1 */
    printf("Input Fahrenheit: ");
    scanf("%lf", &f);
    c = (f - 32) * 5 / 9;
    printf( "\n%.0lf(F) = %.2lf(C)\n\n ", f, c);
    
    return 0;
}
