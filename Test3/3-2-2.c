//Unfinished;

#include <stdio.h>

int factx[32768];
double xlev[32768];

int fac(int n);
double sum(double x, int n);

int main()
{
    double x;
    int n;
    printf("Input x and n:");
    scanf("%lf%d", &x, &n);
    factx[1] = 1;
    xlev[1] = x;
    for (int i = 2; i <= n; i++)
        factx[i] = n * factx[i - 1];
    for (int i = 2; i <= n; i++)
        xlev[i] = xlev[i - 1] * x;

    printf("The result is %lf:", sum(x, n));
    return 0;
}

int fac(int n)
{
    return factx[n];
}
double sum(double x, int n)
{
    double sumy = 1;
    for (int i = 1; i <= n; i++)
        sumy += (xlev[i] / factx[i]);
    return sumy;
}