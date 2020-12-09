/*实验4-3跟踪调试题程序利用R计算圆的面积s*/
#include <stdio.h>
#include <math.h>
#include <assert.h>
#define R
int main(void)
{
    int integer_fraction(float); //声明integer_fraction
    float r, s;
    int s_integer;
    printf("Input a number: ");
    scanf("%f", &r); //读入r
#ifdef R
    s = 3.14159 * r * r;
    printf("Area of round is: %f\n", s);
    s_integer = integer_fraction(s); //调用子函数计算s_integer
    assert((s - s_integer) < 0.5); //判断四舍五入是否合法
    printf("The integer fraction of area is %d\n", s_integer);
#endif
    return 0;
}

int integer_fraction(float x)
{
    return floor(x + 0.5);
}