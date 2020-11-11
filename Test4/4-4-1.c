#include <stdio.h>
#include <math.h>

#define S(a, b, c) ((a + b + c) / 2)
#define AREA(a, b, c) (sqrt(((a + b + c) / 2) * (((a + b + c) / 2) - a) * (((a + b + c) / 2) - b) * (((a + b + c) / 2) - c)))

int main(void)
{
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);
    double _s = S(a, b, c);
    double _area = AREA(a, b, c);
    printf("%lf %lf", _s, _area);
    return 0;
}