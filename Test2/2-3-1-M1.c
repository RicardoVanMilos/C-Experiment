#include <stdio.h>

int main(void)
{
    int x;
    double tax = 0;
    scanf("%d", &x);
    if (x >= 1000 && x < 2000)
        tax = (x - 1000) * 0.05;
    if (x >= 2000 && x < 3000)
        tax = 50 + (x - 2000) * 0.1;
    if (x >= 3000 && x < 4000)
        tax = 150 + (x - 3000) * 0.15;
    if (x >= 4000 && x <= 5000)
        tax = 300 + (x - 4000) * 0.2;
    if (x > 5000)
        tax = 500 + (x - 5000) * 0.25;
    printf("%.2lf", tax);
    return 0;
}