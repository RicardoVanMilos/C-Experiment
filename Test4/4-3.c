/*实验4-3跟踪调试题程序利用R计算圆的面积s*/
#include <stdio.h>
#include <math.h>
#include <assert.h>
#define R
int main(void)
{
    int integer_fraction(float);
    float r, s;
    int s_integer;
    printf("Input a number: ");
    scanf("%f", &r);
#ifdef R
    s = 3.14159 * r * r;
    printf("Area of round is: %f\n", s);
    s_integer = integer_fraction(s);
    assert((s - s_integer) < 0.5);
    printf("The integer fraction of area is %d\n", s_integer);
#endif
    return 0;
}

int integer_fraction(float x)
{
    return floor(x + 0.5);
}