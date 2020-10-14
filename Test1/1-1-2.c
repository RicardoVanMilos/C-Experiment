#include <stdio.h>
#define PI 3.14159
int main(void)
{
    int f;
    short p, k;
    double c, r, s;

    /* 任务2 */
    printf("input the radius r:");
    scanf("%lf", &r);
    s = PI * r * r;
    printf("\nThe acreage is %.2lf\n\n", s);

    return 0;
}
