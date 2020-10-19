#include <stdio.h>
#include <math.h>
#include <string.h>

int abc[10];

int isABCDE();
void breakab(int a);
void breakfg(int a);

int main(void)
{
    int x;
    scanf("%d", &x);
    if (x < 2 || x > 79)
    {
        printf("Fuck you!");
        return 114514;
    }
    int mx = floor((98765 / (double)x));
    for (int ij = 1234; ij <= mx; ij++)
    {
        breakab(ij);
        breakfg(ij * x);
        if (isABCDE())
            printf("%d%d%d%d%d/%d%d%d%d%d=%d", abc[0], abc[1], abc[2], abc[3], abc[4], abc[5], abc[6], abc[7], abc[8], abc[9], x);
    }
    return 0;
}

void breakab(int a)
{
    if (a <= 9999)
    {
        abc[5] = 0;
        abc[6] = a / 1000;
        abc[7] = a % 1000 / 100;
        abc[8] = a % 100 / 10;
        abc[9] = a % 10;
    }
    if (a >= 10000)
    {
        abc[5] = a / 10000;
        abc[6] = a % 10000 / 1000;
        abc[7] = a % 1000 / 100;
        abc[8] = a % 100 / 10;
        abc[9] = a % 10;
    }
}

void breakfg(int a)
{
    if (a <= 9999)
    {
        abc[0] = 0;
        abc[1] = a / 1000;
        abc[2] = a % 1000 / 100;
        abc[3] = a % 100 / 10;
        abc[4] = a % 10;
    }
    if (a >= 10000)
    {
        abc[0] = a / 10000;
        abc[1] = a % 10000 / 1000;
        abc[2] = a % 1000 / 100;
        abc[3] = a % 100 / 10;
        abc[4] = a % 10;
    }
}

int isABCDE()
{
    int sum = 0, t[10];
    memset(t, 0, sizeof(t));
    for (int jk = 0; jk <= 9; jk++)
        t[abc[jk]] = 1;
    for (int jk = 0; jk <= 9; jk++)
        sum += t[jk];
    if (sum == 10)
        return 1;
    else
        return 0;
}