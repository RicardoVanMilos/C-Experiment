/*实验4-2程序修改替换题程序*/
#include <stdio.h>

//子函数声明
int maxx(int x, int y, int z);
float summ(float x, float y);

int main(void)
{
    int a, b, c;
    float d, e;
    printf("Input three integers:");
    scanf("%d%d%d", &a, &b, &c);
    printf("\nThe maximum of them is %d\n", maxx(a, b, c));

    printf("Input two floating point numbers:");
    scanf("%f%f", &d, &e);
    printf("\nThe sum of them is  %f\n", summ(d, e));
    return 0;
}

int maxx(int x, int y, int z)
{
    int m = z; //if语句比较大小
    if (x > m)
        m = x;
    if (y > m)
        m = y;
    return m;
}

float summ(float x, float y)
{
    return x + y; //实现相加
}
