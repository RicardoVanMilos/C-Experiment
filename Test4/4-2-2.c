/*实验4-2程序修改替换题程序*/
#include <stdio.h>

int m;
//定义宏函数
#define maxx(x, y, z) \
    {                 \
        m = z;        \
        if (x > m)    \
            m = x;    \
        if (y > m)    \
            m = y;    \
    }

#define summ(x, y) (x + y)

int main(void)
{
    m = 0;
    int a, b, c;
    float d, e;
    printf("Input three integers:");
    scanf("%d%d%d", &a, &b, &c);
    maxx(a, b, c);
    printf("\nThe maximum of them is %d\n", m);

    printf("Input two floating point numbers:");
    scanf("%f%f", &d, &e);
    printf("\nThe sum of them is  %f\n", summ(d, e));
    return 0;
}
