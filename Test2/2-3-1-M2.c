#include <stdio.h>

int main(void)
{
    int x, level;
    double tax = 0;
    scanf("%d", &x);
    level = x / 1000;
    switch (level)
    {
    case 0:
        break;
    case 1:
        tax = (x - 1000) * 0.05;
        break;
    case 2:
        tax = 50 + (x - 2000) * 0.1;
        break;
    case 3:
        tax = 150 + (x - 3000) * 0.15;
        break;
    case 4:
        tax = 300 + (x - 4000) * 0.2;
        break;
    default:
        tax = 500 + (x - 5000) * 0.25;
        break;
    }
    printf("%.2lf", tax);
    return 0;
}